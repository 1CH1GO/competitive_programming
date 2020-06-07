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

	int x, y;
	cin >> x >> y;
	if(x > 0 && y > 0)puts("1");
	else if(x < 0 && y > 0)puts("2");
	else if(x < 0 && y < 0)puts("3");
	else puts("4");
	return 0;
}
// Write Here
