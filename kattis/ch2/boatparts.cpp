// 失敗するからこそ そこから立ち向かって行く強さがあってそんな強さが本当の強さだと私は思うから
#ifdef DAIJOBU
#include "/home/v-o_o-v/deb.h"
#define deb(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#include <bits/stdc++.h>
#define deb(x...)
#endif 

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, p;
	cin >> n >> p;
	set<string> st;
	int ans = INT_MAX;
	for(int i = 0; i < p; i++){
		string s;
		cin >> s;
		st.insert(s);
		if((int)st.size() == n){
			ans = min(ans, i + 1);
		}
	}
	if(ans == INT_MAX)cout << "paradox avoided\n";
	else cout << ans << '\n';
	return 0;
}
// Write Here
