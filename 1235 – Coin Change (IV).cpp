
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

vl v, sum;
ll a[20];

void subset(int k, int n) {
    if(k==n+1) {
        ll s=0LL;
        for(int i=0; i<v.size(); i++)
            s+=v[i];
        if(s>0)
            sum.pb(s);
        return;
    } else {
        subset(k+1, n);
        v.pb(a[k]);
        subset(k+1, n);
        v.ppb();
    }
}

bool bs(int low, int high, ll k) {
    while(low<=high) {
        int mid=(low+high)>>1;
        if(sum[mid]==k)
            return true;
        if(sum[mid]<k)
            low=mid+1;
        else
            high=mid-1;
    }
    return false;
}

int main() {
    int test=in(), t=0;
    while(test--) {
        int n=in();
        ll k=Lin();
        for(int i=1; i<=n; i++)
            a[i]=Lin();
        subset(1, n);
        sort(all(sum));
        n=sum.size()-1;
        bool ok=bs(0, n, k);
        if(ok)
            printf("Case %d: Yes\n", ++t);
        else {
            for(int i=0; i<sum.size()-1 && !ok && sum[i]<k; i++) {
                ok=bs(i+1, n, k-sum[i]);
            }
            if(ok)
                printf("Case %d: Yes\n", ++t);
            else
                printf("Case %d: No\n", ++t);
        }
    }
    return 0;
}







