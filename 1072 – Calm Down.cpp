#include<bits/stdc++.h>
using namespace std;

#define ll          long long
#define gcd(a,b)    __gcd(a,b)
#define lcm(a,b)    a*(b/gcd(a,b))
#define pii         pair<int, int>
#define pll         pair<ll, ll>
#define pli         pair<ll, int>
#define pil         pair<int, ll>
#define vi          vector<int>
#define vl          vector<ll>
#define vii         vector<pii>
#define vll         vector<pll>
#define vil         vector<pil>
#define vli         vector<pli>
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
const double pi = acos(-1.0);

double sqrtt(double n) {
    if(n<0.0)
        return 0.0;
    else
        return sqrt(n);
}

double acoss(double n) {
    if(n>=1.0)
        return acos(1.0);
    else if(n<=-1.0)
        return acos(-1.0);
    else
        return acos(n);
}

double triangle_area(double a, double b, double c) {
    double s=(a+b+c)/2.0;
    return sqrtt(s*(s-a)*(s-b)*(s-c));
}

double triangle_angle(double a, double b, double c) {
    return acoss((b*b+c*c-a*a)/(b*c*2.0));
}

int main() {
    int test=in(), t=0;
    while(test--) {

        printf("Case %d: %.10lf\n", ++t, ans);
    }
    return 0;
}


