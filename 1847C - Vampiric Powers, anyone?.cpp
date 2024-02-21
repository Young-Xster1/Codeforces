//* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ ///*/

#include <bits/stdc++.h>
 
using namespace std;
using i64 = long long;
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
 
const int Max_value = 1 << 8;
 
class solution {
public:
    void solve() {
        int n ;cin >> n;
        vt a(n);takevect(a);
        
        vector<bool> pref(Max_value);
        int xr = 0;
        pref[0] = true;
        int ans = 0;
        for(int i = 0; i < n ; i++){
            xr ^= a[i];
            for(int j = 0 ; j < Max_value ; j++){
                if(pref[j]){
                    ans = max(ans , j ^ xr);
                }
            }
            pref[xr] = true;
        }
        co ans;ln;
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
    int test=1 ;
    inp ( test );
    while ( test -- ) sol.solve();
 
	
    return 0;
}
