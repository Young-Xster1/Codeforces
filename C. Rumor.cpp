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
ll Min=INF;
const ll N=1e5+1;
ll n,k;
vector<vector<int>> graph;
bool visited[N]; 
 
void dfs(vector<ll> &a ,int parent,ll &Min){
	visited[parent] = true ;
    Min=min(Min,a[parent]);
	for(auto child: graph[parent]){
		if(!visited[child])
            dfs(a ,child,Min);
	}
    
	return ;
}
class solution {
public:
    void solve() {
        inp(n); inp(k);
        graph.resize(n);
         memset(visited,false,sizeof(visited));
        ll f,s;
        vt a(n);takevect(a);
        set<int> visNode;
       for(int i=0;i<k;i++){
            cin>> f>>s;
            graph[f-1].pb(s-1);
            graph[s-1].pb(f-1);
        }
        ll sum=0;
        for(int i=0;i<n;i++){
            Min=INF;
            if(!visited[i]){
                dfs(a,i,Min);
                sum+=Min;
            }
        }
        co sum;
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
