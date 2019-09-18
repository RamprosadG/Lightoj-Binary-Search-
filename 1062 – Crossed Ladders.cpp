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

double square(double n) {
    return n*n;
}

int main() {
    int test=in(), t=0;
    while(test--) {
        double x=Din(), y=Din(), c=Din(), w;
        double low=0.0, high=min(x, y), mid;
        while(high-low>=0.00000000001) {
            mid=(low+high)/2.0;
            w=mid;
            double a=sqrt(square(x)-square(w));
            double b=sqrt(square(y)-square(w));
            double cur=1.0/(1.0/a+1.0/b);
            if(cur<c)
                high=mid;
            else
                low=mid;
        }
        printf("Case %d: %.10lf\n", ++t, mid);
    }
    return 0;
}


