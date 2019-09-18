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

int a[N];

int bs(int n, int x) {
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

int main() {
    int test=in(), t=0;
    while(test--) {
        int n=in(), q=in();
        for(int i=1; i<=n; i++)
            a[i]=in();
        printf("Case %d:\n", ++t);
        while(q--) {
            int a=in(), b=in();
            printf("%d\n", bs(n, b)-bs(n, a-1));
        }
    }
    return 0;
}




