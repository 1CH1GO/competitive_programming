// 失敗するからこそ そこから立ち向かって行く強さがあってそんな強さが本当の強さだと私は思うから
#ifdef DAIJOBU
#include "/home/v-o_o-v/deb.h"
#define deb(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#include <bits/stdc++.h>
#define deb(x...)
#endif 

using namespace std;
const int maxn = 1e5 + 100;

int X[maxn];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, q;
	cin >> n >> q;
	for(int i = 1; i <= n; i++){
		cin >> X[i];
	}
	while(q--){
		int op, a, b;
		cin >> op >> a >> b;
		if(op == 1){
			X[a] = b;
		}else{
			cout << abs(X[a] - X[b]) << '\n';
		}
	}
	return 0;
}
// Write Here
