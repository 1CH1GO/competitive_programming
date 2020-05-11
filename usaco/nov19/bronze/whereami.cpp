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

	freopen("whereami.in", "r", stdin);
	freopen("whereami.out", "w", stdout);

	int n;string s;
	cin >> n >> s;
	for(int i = 1; i <= n; i++){
		set<string> st;
		for(int j = 0; j <= n - i; j++){
			st.insert(s.substr(j, i));
		}
		// deb(st);
		if((int)st.size() == n - i + 1){
			cout << i;
			return 0;
		}
	}
	return 0;
}
// Write Here
