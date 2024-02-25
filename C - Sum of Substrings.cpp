
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
        ll n , k ;
        cin >> n >> k;
        string s;cin >> s;
        ll sum = 0;
        for (int i = 0 ; i < n - 1; i++){
            if(s[i] == '1' && s[i+1] == '0'){
                sum += 10;
            } else if(s[i] == '0' && s[i+1] == '1'){
                sum += 1;
            } else if(s[i] == '1' && s[i+1] == '1'){
                sum += 11;
            }
        }
        if(s[0] == '1' && s[n-1] == '1'){
            co sum;ln;return;
        }
        ll ind = INF,indr = INF;
        for(int i = 0 ; i < n - 1 ; i++){
            
            if(s[i] == '1'){
                if(i != 0){
                    ind = i;break;
                }else{
                    break;
                }
            }
            
        }
        
        for(int i = n-1 ; i >= 0 ; i--){
            
            if(s[i] == '1'){
                if(i != n-1){
                    indr = i;break;
                }else{
                    break;
                }
            }
            
        }
        ll met = INF;
        if(indr != INF)
            met = n-1-indr;
 
        ll x = ind + (n-1-indr);
        if(ind != INF && indr != INF && k >= x){
            swap(s[n-1], s[indr]);
            swap(s[0] , s[ind]);
            
        }else if(indr != INF && k >= met && k >= ind){
            if(s[n-1] == '0')
                swap(s[n-1], s[indr]);
            else{
                swap(s[0] , s[ind]);
            }
        }else if(indr != INF && k >= met && k < ind){
            swap(s[n-1], s[indr]);
        }else if(ind != INF && k < met && k >= ind){
            swap(s[0] , s[ind]);
        }
        ll sum1 = 0;
 
        for (int i = 0 ; i < n - 1; i++){
            if(s[i] == '1' && s[i+1] == '0'){
                sum1 += 10;
            } else if(s[i] == '0' && s[i+1] == '1'){
                sum1 += 1;
            } else if(s[i] == '1' && s[i+1] == '1'){
                sum1 += 11;
            }
        }
        co min(sum , sum1);ln;
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
