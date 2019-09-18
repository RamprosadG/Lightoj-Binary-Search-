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

int main() {
    int test=in(), t=0;
    while(test--) {
        double ab=Din(), ac=Din(), bc=Din(), p=Din();
        double low=0.0, high=ab, mid;
        while(high-low>=0.0000000001) {
            mid=(low+high)/2.0;
            double ad=mid;
            double ae=(ac*ad)/ab;
            double de=(bc*ad)/ab;
            double s=(ad+de+ae)/2.0;
            double ade=sqrt(s*(s-ad)*(s-de)*(s-ae));
            s=(ab+bc+ac)/2.0;
            double bdec=sqrt(s*(s-ab)*(s-bc)*(s-ac))-ade;
            if(ade/bdec<p)
                low=mid;
            else
                high=mid;
        }
        printf("Case %d: %.10lf\n", ++t, mid);
    }
    return 0;
}

