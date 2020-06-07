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

	int a, b, c, n;
	cin >> a >> b >> c >> n;
	if(n < 3){
		puts("NO");
		return 0;
	}
	if(a && b && c && (a + b + c >= n))puts("YES");
	else puts("NO");
	return 0;
}
// Write Here
