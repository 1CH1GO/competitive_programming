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

	int g, s, c;
	cin >> g >> s >> c;
	int tot = g * 3 + s * 2 + c * 1;
	string ans1, ans2;
	if(tot >= 8)ans1 = "Province";
	else if(tot >= 5)ans1 = "Duchy";
	else if(tot >= 2)ans1 = "Estate";
	if(tot >= 6)ans2 = "Gold";
	else if(tot >= 3)ans2 = "Silver";
	else ans2 = "Copper";
	if(ans1.size()){
		cout << ans1 << " or " << ans2;
	}else cout << ans2;
	return 0;
}
// Write Here
