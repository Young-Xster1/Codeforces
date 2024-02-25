
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
        string s;
        cin >> s;
        map<char,int> mp;
        bool test1 = false,test2 = false;
        int ind = INF;
        
        for(int i = 0 ; i < len(s) ; i++){
            if(s[i] == 'A' && s[i+1] == 'B' && s[i+2] == 'A'){
                ind = i+3;break;
            }
            if(ind == len(s)){
                no;return;
            }
        }
 
        for(int i = 0 ; i < len(s) ; i++){
 
            if(s[i] == 'B' && s[i+1] == 'A' && s[i+2] == 'B'){
                ind = i+3;break;
            }
 
            if(ind == len(s)){
                no;return;
            }
        }
 
        for(int i = ind ; i < len(s) ; i++){
 
            if((s[i] == 'A' && s[i+1] == 'B') || (s[i] == 'B' && s[i+1] == 'A')){
                yes;return;
            }
        }
 
        for(int i = 0 ; i < len(s) ; i++){
          
            if(!test1 && s[i] == 'A'){
                if(s[i+1] == 'B'){
                    test1 = true;
                    i++;
                    continue;
                }
            }
 
            if(!test2 && s[i] == 'B'){
                if(s[i+1] == 'A'){
                    test2 = true;
                    i++;
                }
            }
        }
 
        if(test1 && test2){
            yes;return;
        }
        no;
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
