//* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ ///*/
 
 
#include <bits/stdc++.h>
 
using namespace std;
using i64 = long long;
// #include "debug.cpp"
#define pb push_back
#define fast cout.tie(0), cin.tie(0), ios_base::sync_with_stdio(0)
#define ll long long
#define vt vector<ll>
#define vti vector<int>
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
#define Sum(A) accumulate( A.begin() , A.end() , (ll)0 )
ll modInverse(ll a , ll modd) {return a <= 1 ? a : modd - (ll)(modd/a) * modInverse(modd % a , modd) % modd;}
template<typename T>ostream& operator <<(ostream& ostream, vector<T>& v) {for(auto& element : v) {cout << element << " ";}return ostream;}
template<typename T>ostream& operator <<(ostream& ostream, vector<vector<T>>& v) {for(auto& row : v) {for(auto& cell : row) {cout << cell << " ";}cout << "\n";}return ostream;}
ll custom_modulo(ll a, ll b) {return ((a % b) + b) % b;}
const ll Mod = 1e9 + 7;
 
 
class solution {
public:
    void solve() {
        ll a , b , xk , yk , xq , yq;
        cin >> a >> b;
        cin >> xk >> yk >> xq >> yq;
        set<pair<ll , ll>> king;
        set<pair<ll , ll>> queen;
 
        king.insert({xk + a, yk + b});
        king.insert({xk + b, yk + a});
        king.insert({xk - a, yk + b});
        king.insert({xk - b, yk + a});
        king.insert({xk + a, yk - b});
        king.insert({xk + b, yk - a});
        king.insert({xk - a, yk - b});
        king.insert({xk - b, yk - a});
 
        queen.insert({xq + a, yq + b});
        queen.insert({xq + b, yq + a});
        queen.insert({xq - a, yq + b});
        queen.insert({xq - b, yq + a});
        queen.insert({xq + a, yq - b});
        queen.insert({xq + b, yq - a});
        queen.insert({xq - a, yq - b});
        queen.insert({xq - b, yq - a});
 
        int ans = 0;
        for(auto d : king)
            for(auto s : queen)
                if(d == s) ans++;
            
        
        cout << ans << endl;
    }
};
 
signed main() {
    fast;
    cout << fixed;
    cout << setprecision(14);
    #ifndef ONLINE_JUDGE
        freopen("inp.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("err.txt", "w", stderr);
    #endif
    solution sol;
    int test=1 ;
    inp ( test ); 
    while ( test -- ) sol.solve();
    
 
    return 0;
}
