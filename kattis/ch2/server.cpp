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
	
	int n, T;
	cin >> n >> T;
	int c = 0, sum = 0;
	for(int i = 0; i < n; i++){
		int t;
		cin >> t;
		sum += t;
		if(sum <= T)c++;
	}
	cout << c << '\n';
	return 0;
}
// Write Here
