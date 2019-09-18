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
const int N = 2e3 + 5;

int a[N];

ll bs(int left, int right, int x) {
    int ans=0, low=left, high=right;
    while(low<=high) {
        int mid=(low+high)>>1;
        if(a[mid]<x) {
            ans=mid-left+1;
            low=mid+1;
        } else
            high=mid-1;
    }
    return (ll)ans;
}

int main() {
    int test=in(), t=0;
    while(test--) {
        int n=in();
        for(int i=1; i<=n; i++)
            a[i]=in();
        sort(a+1, a+1+n);
        ll ans=0LL;
        for(int i=1; i<=n-2; i++) {
            for(int j=i+1; j<=n-1; j++) {
                ans+=bs(j+1, n, a[i]+a[j]);
            }
        }
        printf("Case %d: %lld\n", ++t, ans);
    }
    return 0;
}








