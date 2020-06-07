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

	int A, I;
	cin >> A >> I;
	for(int i = 1;; i++){
		int now = ceil(i / (long double)A);
		if(now == I){
			cout << i << '\n';
			return 0;
		}
	}
	return 0;
}
// Write Here
