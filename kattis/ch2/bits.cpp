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

	int t;
	cin >> t;
	while(t--){
		int ans = 0;
		int n;
		cin >> n;
		while(n){
			ans = max(ans, __builtin_popcount(n));
			n /= 10;
		}
		cout << ans << '\n';
	}
	return 0;
}
// Write Here
