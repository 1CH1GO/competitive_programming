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

	int n;
	cin >> n;
	bitset<64> bs(n);
	for(int i = 0; i < n; i++){
		char c;
		cin >> c;
		if(c == 'O')bs[n - i - 1] = 0;
		else bs[n - i - 1] = 1;
	}
	cout << (long long)pow(2, n) - bs.to_ullong() - 1 << '\n';
	// cout << (long long)pow(2, 60);
	return 0;
}
// Write Here
