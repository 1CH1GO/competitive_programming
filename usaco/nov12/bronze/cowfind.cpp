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

	freopen("cowfind.in", "r", stdin);
	freopen("cowfind.out", "w", stdout);

	string s;
	cin >> s;
	vi left_pos, right_pos;
	for(int i = 0; i < (int)s.size() - 1; i++){
		if(s[i] == '(' && s[i + 1] == '(')left_pos.pb(i);
		if(s[i] == ')' && s[i + 1] == ')')right_pos.pb(i);
	}
	lint ans = 0;
	for(auto i:left_pos){
		int now = upper_bound(all(right_pos), i) - right_pos.begin();
		ans += (1LL) * (right_pos.size() - now);
	}
	cout << ans;
	return 0;
}
// Write Here
