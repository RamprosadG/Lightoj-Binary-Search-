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
const int N = 1e3 + 5;

vl v, sum1, sum2;

void subset(int k, int n, ll a[], int mark) {
    if(k==n+1) {
        ll s=0LL;
        for(int i=0; i<v.size(); i++)
            s+=v[i];
        if(mark==1)
            sum1.pb(s);
        else
            sum2.pb(s);
        return;
    } else {
        subset(k+1, n, a, mark);
        v.pb(a[k]);
        subset(k+1, n, a, mark);
        v.ppb();
    }
}

ll bs(vl a, ll x, int n) {
    int ans=0, low=0, high=n;
    while(low<=high) {
        int mid=(low+high)>>1;
        if(a[mid]<=x)
            ans=mid+1, low=mid+1;
        else
            high=mid-1;
    }
    return (ll)ans;
}


int main() {
    int test=in(), t=0;
    while(test--) {
        ll a[17], b[17];
        int n=in(), m;
        ll w=Lin();
        if(n%2)
            m=n/2, n=n/2+1;
        else
            m=n/2, n=n/2;
        for(int i=1; i<=n; i++) {
            a[i]=Lin();
        }
        for(int i=1; i<=m; i++) {
            b[i]=Lin();
        }
        subset(1, n, a, 1);
        subset(1, m, b, 2);
        sort(all(sum1)), sort(all(sum2));
        ll ans=0LL;
        n=sum1.size()-1, m=sum2.size()-1;
        for(int i=0; i<=n; i++) {
            ll cur=w-sum1[i];
            ans+=bs(sum2, cur, m);
        }
        printf("Case %d: %lld\n", ++t, ans);
        sum1.clear();
        sum2.clear();
        v.clear();
    }
    return 0;
}





