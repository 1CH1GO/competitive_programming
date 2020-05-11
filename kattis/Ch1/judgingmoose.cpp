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

	int l, r;
	cin >> l >> r;
	if(l == 0 && r == 0)cout << "Not a moose\n";
	else if(l == r)cout << "Even " << 2 * l << '\n';
	else cout << "Odd " << 2 * max(l, r) << '\n'; 
	return 0;
}
// Write Here
