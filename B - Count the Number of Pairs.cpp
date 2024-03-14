//* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ ///*/
 

 
#include <bits/stdc++.h>
 
using namespace std;
using i64 = long long;
// #include "debug.cpp"
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
#define trav(a,x) for (auto& a : x)
ll modInverse(ll a , ll modd) {return a <= 1 ? a : modd - (ll)(modd/a) * modInverse(modd % a , modd) % modd;}
 
const int N = 3e5 + 5;
 
class solution {
public:
 
    void solve() {
        int n , k ; cin >> n >> k;
        string s; cin >> s;
        vector<int> low (26 , 0);
        vector<int> upp (26 , 0);
        for(int i = 0 ; i < n ; i++){
            if(((s[i]) >= 'A') && ((s[i]) <= 'Z')){
                upp[s[i] - 'A']++;
                
            } else{
                low[s[i] - 'a']++;
               
            }
        }
        int ans = 0;
        for(int i = 0 ; i < 26 ; i++){
            ans += min(low[i] , upp[i]);
        }
        for(int i = 0 ; i < 26 ; i++){
            int x = abs(low[i] - upp[i]);
            if(k > 0 && x >= 2){
                if(k > x / 2){
                    ans += x / 2;
                    k -= x / 2;
                }else{
                    ans += k;
                    k = 0;
                    break; 
                }
            }
        }
        cout << ans;ln;
    }
};
 
signed main() {
    fast;
    cout << fixed;
    cout << setprecision(14);
    #ifndef ONLINE_JUDGE
        freopen("inp.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
        // freopen("err.txt", "w", stderr);
    #endif
    
    int test=1 ;
    inp ( test ); 
    while ( test -- ){solution sol; sol.solve();}
 
 
    
    return 0;
}
