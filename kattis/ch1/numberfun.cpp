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
		int a, b, c;
		cin >> a >> b >> c;
		if(a + b == c)puts("Possible");
		else if(a - b == c || b - a == c)puts("Possible");
		else if(a * b == c)puts("Possible");
		else if(a * c == b || b * c == a)puts("Possible");
		else puts("Impossible");
	}
	return 0;
}
// Write Here
