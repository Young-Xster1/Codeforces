//* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ ///*/
#include <bits/stdc++.h>
 
using namespace std;
 
#define pb push_back
#define fast cout.tie(0), cin.tie(0), ios_base::sync_with_stdio(0)
#define ll long long
#define vt vector<ll>
#define matrix vector<vector<ll>>
#define ff first
#define ss second
#define yes cout << "YES" << '\n';
#define no cout << "NO" << '\n';
#define ps(x, y) fixed << setprecision(y) << x;
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define sortt(x) sort(all(x))
#define sorttr(x) sort(rall(x))
#define mems(a, x) memset(a, x, sizeof(a))
#define rev(x) reverse(all(x))
#define co cout <<
#define inp(x) cin >> x
#define space cout << " "
#define ln cout << '\n'
#define takevect(x) for (auto &d : x) cin >> d;
#define len(s) (int)s.size()
#define rep(i, y) for (int i = 0; i < y; i++)
#define INF INT_MAX
int arr[31];
class solution {
public:
    void solve() {
        ll n;
        cin>>n;
        ll l=0,r,ans,mid;
        if(n>2e9){
            r=2e9;
        }else{
            r=n;
        }
        while(l<=r){
            mid= (l+r)/2;
            if((mid*(mid-1))/2<=n){
                l=mid+1;ans=mid;
            }else{
                r=mid-1;
            }
        }
        co ans+(n-(ans*(ans-1)/2));ln;
        
	}
};
 
signed main() {
    fast;
    cout << fixed;
    cout << setprecision(14);
    #ifndef ONLINE_JUDGE
        freopen("inp.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    solution sol;
	int cas=0;
    int test=1 ;  inp ( test );
    while ( test -- ) sol.solve();
	
    return 0;
}
