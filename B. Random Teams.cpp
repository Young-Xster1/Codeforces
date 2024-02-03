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

ll C(ll x){
	return (x*(x-1))/2;
}
class solution {
public:
    void solve() {
		ll n,m; 
		inp(n);inp(m);
		
		if(m==1){
			ll s=n-(m-1);
			ll ans=C(s);
			co ans;space;co ans;
			return;
		}
		ll cnt1=(((n/m-1)*(n/m))/2)*(m-n%m) + (((n/m)*(n/m+1))/2)*(n%m);
		ll s=n-(m-1);
		ll cnt2=C(s);
		cout<<cnt1<<" "<<cnt2;
		
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
