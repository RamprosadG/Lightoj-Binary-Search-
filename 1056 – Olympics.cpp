#include<bits/stdc++.h>
using namespace std;

#define ll          long long
#define gcd(a,b)    __gcd(a,b)
#define lcm(a,b)    a*(b/gcd(a,b))
#define pii         pair<int, int>
#define pll         pair<ll, ll>
#define vi          vector<int>
#define vl          vector<ll>
#define vii         vector<pii>
#define vll         vector<pll>
#define mii         map<int, int>
#define mll         map<ll, ll>
#define pb          push_back
#define ppb         pop_back
#define mp          make_pair
#define lb          lower_bound
#define ub          upper_bound
#define ff          first
#define ss          second
#define all(v)      v.begin(),v.end()
#define fill(a,b)   memset(a,b,sizeof a)
#define endl        '\n'

int in() {
    int n;
    scanf("%d",&n);
    return n;
}

ll Lin() {
    ll n;
    scanf("%lld",&n);
    return n;
}

double Din() {
    double n;
    scanf("%lf",&n);
    return n;
}

const ll inf = 1e17;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;
const double pi=acos(-1);

int main() {
    int test=in(), t=0;
    while(test--) {
        int a=in();
        string s;
        cin>>s;
        int b=in();
        double left=0.0, right=400.0, length, width;
        while(right-left>=0.00000001) {
            double mid=(left+right)/2.0;
            length=mid;
            width=length*(double)b/(double)a;
            double r=sqrt(length*length+width*width)/2.0;
            double ps=(pi*r/360.0)*acos((2.0*r*r-width*width)/(2.0*r*r));
            if(length*2.0+ps<400.0)
                left=mid;
            else
                right=mid;
        }
        printf("Case %d: %.8lf %.8lf\n", ++t, length, width);
    }
    return 0;
}

