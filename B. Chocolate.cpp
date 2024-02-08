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
 
class solution {
public:
    void solve() {
        ll n;
        inp(n);
        vector<int> a(n);
        vector<int> b;
        takevect(a);
        ll cnt=0;
        for(int i=0;i<n;i++){
            if(a[i]==1){
                cnt++;
            }
        }
        if(cnt==1){
            co 1;return;
        }else if(cnt==0){
            co 0;return;
        }
        ll l=0;ll r=n-1;
        if(a[0]==0){
            for(int i=0;i<n;i++){
                if(a[i]==1){
                    l=i;break;
                }
            }
        }
        if(a[n-1]==0){
            for(int i=n-1;i>0;i--){
                if(a[i]==1){
                    r=i;break;
                }
            }
        }
        ll mul=1;ll cnt0=0;
        for(int i=l;i<=r;i++){
            if(a[i]==0){
                cnt0++;
            }else{
                mul*=(cnt0+1);
                cnt0=0;
                
            }
        }
        co mul;
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
    // int test=1 ;  inp ( test );
    // while ( test -- ) 
    sol.solve();
	
    return 0;
}
