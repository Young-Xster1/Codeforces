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
 
bool test3(vt &a){
    for(auto i :a){
        if(i != 3) return false;
    }
    return true;
}
 
class solution {
public:
    void solve() {
        int n;cin >> n;
        vt a(n);
        int cnt3 = 0;
        takevect(a);
        int indDup = INF,ind0 = 0;
        int mindays =0;
 
        if(n == 1){
            if(a[0] == 0){
                co 1;return;
            }else{
                co 0;return;
            }
        }else{
            if(a[0] == 3){
                int i = 0;
                while(a[i] == 3 && i <n) i++;
                if(a[n-1] == 3 && i == n){
                    co 0 ;return;
                }else{
 
                    for(int j = i ; j < n ; j++){
                        if(a[j] == 0) mindays++;
                        else if(a[j-1] == 2 && a[j] ==2){mindays++;a[j] = 0;}
                        else if(a[j-1] == 1 && a[j] == 1){mindays++;a[j] = 0;}
                        else if(a[j-1] == 1 && a[j] == 3) a[j] = 2;
                        else if(a[j-1] == 2 && a[j] == 3) a[j]=1; 
                    }
                    co mindays;return;
                }
            }else{
                for(int j = 0 ; j < n ; j++){
                    if(a[j] == 0) mindays++;
                    if(j >= 1){
                        if (a[j-1] == 2 && a[j] == 2){mindays++;a[j]=0;}
                        else if(a[j-1] == 1 && a[j] == 1){ mindays++;a[j]=0;}
                        else if(a[j-1] == 1 && a[j] == 3) a[j]=2;
                        else if(a[j-1] == 2 && a[j] == 3) a[j]=1; 
                        
                    }
                }
                co mindays;return;    
                
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
    int test=1 ;
    // inp ( test );
    while ( test -- ) sol.solve();
 
	
    return 0;
}
