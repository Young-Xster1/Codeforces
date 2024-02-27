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
 
 
 
 
class solution {
public:
    void solve() {
        int n ; cin >> n ;
        vt a(n);takevect(a);
        ll sum = 0;
        for(int i = 0 ; i < n ; i++){
            sum += a[i];
        }
        if(sum % 3 == 0){
            co 0;ln; return;
        }
        ll cp1 = sum;
        ll cp2 = sum;
        ll x = ceil((double) cp1 / (double) 3);
        ll s = cp2 / 3;
        ll akber = x * 3;
        ll as8r = s * 3;
 
        int Min = akber - sum;
        sortt(a);
        ll diff = sum - as8r;
        if(binary_search(all(a) , diff)){
            co 1 ;ln;return;
        } else {
            for(int i = 0 ; i < n ; i++){
                if((sum - a[i]) % 3 == 0){
                    co 1;ln; return;
                }
            }
            co min(Min,2) ;ln;
        }
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
