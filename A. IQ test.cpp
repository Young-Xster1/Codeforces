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
#define espace cout << " "
#define ln cout << '\n'
#define takevect(x) for (auto &d : x) cin >> d;
#define len(s) (int)s.size()
#define rep(i, y) for (int i = 0; i < y; i++)
#define INF (ll)(1e18)
 
class solution{ 
public :
    void solve() {
        int n;inp(n);
        vt a(n);takevect(a);
        if(a[0]%2!=a[1]%2){
            if(a[1]%2==a[2]%2){
                co 1;return;
            }
        }
        if(a[n-1]%2!=a[n-2]%2){
            if(a[n-3]%2==a[n-2]%2){
                co n;return;
            }
        }
        for(int i=1;i<n-1;i++){
            if((a[i]%2)!=(a[i-1]%2) && (a[i]%2)!=(a[i-1]%2)){
                co i+1;return;
            }
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
    // int test=1 ;  inp ( test );
    // while ( test -- ) 
    sol.solve();
    return 0;
}
 
