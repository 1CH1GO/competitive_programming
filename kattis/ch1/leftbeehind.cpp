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
	while(cin >> x >> y){
		if(x == 0 && y == 0)break;
		if(x + y == 13)puts("Never speak again.");
		else if(x == y)puts("Undecided.");
		else if(x > y)puts("To the convention.");
		else puts("Left beehind.");
	}
	return 0;
}
// Write Here
