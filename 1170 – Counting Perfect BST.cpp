
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
const ll mod = 1e8 + 7;
const int N = 1e6 + 5;

vl num;
ll a[N];

int bs(int n, ll x) {
    int ans=0, low=1, high=n;
    while(low<=high) {
        int mid=(low+high)>>1;
        if(a[mid]<=x)
            ans=mid, low=mid+1;
        else
            high=mid-1;
    }
    return ans;
}

ll bigmod(ll a, ll b, ll c) {
    if(b==0)
        return 1LL;
    ll x=bigmod(a, b/2, c);
    x=(x*x)%c;
    if(b%2)
        x=(x*a)%c;
    return x;
}

ll cat[N];

ll catalan(int n) {
    if(n==0)
        return 0LL;
    if(n==1)
        return 1ll;
    if(cat[n])
        return cat[n];
    return cat[n]=((catalan(n-1)%mod * (4LL*n*n - 2*n)%mod)%mod * bigmod((ll)n*n + n, mod-2, mod)%mod)%mod;
}

int main() {
    ll m=10000000000;
    for(ll i=2LL; i*i<=m; i++) {
        for(ll j=i*i; j<=m; j*=i)
            num.pb(j);
    }
    sort(all(num));
    a[1]=num[0];
    int n=1;
    for(int i=1; i<num.size(); i++) {
        if(num[i]!=num[i-1])
            a[++n]=num[i];
    }
    int test=in(), t=0;
    while(test--) {
        ll a=Lin(), b=Lin();
        int ans=bs(n, b)-bs(n, a-1);
        printf("Case %d: %lld\n", ++t, catalan(ans));
    }
    return 0;
}






