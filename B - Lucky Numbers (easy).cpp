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
template<typename T>ostream& operator <<(ostream& ostream, vector<T>& v) {for(auto& element : v) {cout << element << " ";}return ostream;}

class solution {
public:

    void solve() {
        ll n;
        cin >> n;
        set<ll> ans;
        
        for(int j = 0 ; j <= 12 ; j+=2){
            
            for(ll i = 0 ; i <= (1 << j) ; i++){
                string ch = "";
                ll s = i;
                int cnt7 = 0, cnt4 = 0;
                int pos = 0;
                while (s) {
                    if (s & 1) {
                        ch += '7';
                        cnt7++;
                    } else {
                        ch += '4';
                        cnt4++;
                    }
                    s >>= 1;
                    pos++;
                }
                
                while (pos < j) {
                    ch += '4';
                    cnt4++;
                    pos++;
                }
                if (ch != "" && cnt7 == cnt4) {
                    ans.insert(stoll(ch));
                }
            }
        }
        ll res = *ans.lower_bound(n);
        cout << res;
    }
};
 
signed main() {
    fast;
    cout << fixed;
    cout << setprecision(14);
    #ifndef ONLINE_JUDGE
        freopen("inp.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
        freopen("err.txt", "w", stderr);
    #endif
    solution sol;
    int test=1 ;
    // inp ( test ); 
    while ( test -- ) sol.solve();

    return 0;
}
