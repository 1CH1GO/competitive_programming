// 失敗するからこそ そこから立ち向かって行く強さがあってそんな強さが本当の強さだと私は思うから
#ifdef DAIJOBU
#include "/home/v-o_o-v/deb.h"
#define deb(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#include <bits/stdc++.h>
#define deb(x...)
#endif 

using namespace std;

#define mp make_pair
#define mt make_tuple
#define fi first
#define se second
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define ford(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define fore(i, a, b) for (int i = (int)(a); i <= (int)(b); ++i)

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
 
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpi;
typedef long long lint;
typedef double ld;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	freopen("gymnastics.in", "r", stdin);
	freopen("gymnastics.out", "w", stdout);

	set<pii> s;
	int k, n;
	cin >> k >> n;
	forn(i, k){
		int a[n];
		forn(j, n)cin >> a[j];
		for(int j = 0; j < n; j++){
			for(int l = j + 1; l < n; l++){
				s.insert({a[j], a[l]});
			}
		}
	}
	// deb(s);
	int ans = s.size();
	for(auto i:s){
		if(s.find({i.se, i.fi}) != s.end()){
			ans --;
		}
	}
	cout << ans;
	return 0;
}
// Write Here
