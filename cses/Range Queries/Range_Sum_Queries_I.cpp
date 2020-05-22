// 失敗するからこそ そこから立ち向かって行く強さがあってそんな強さが本当の強さだと私は思うから
#ifdef DAIJOBU
#include "/home/v-o_o-v/deb.h"
#define deb(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#include <bits/stdc++.h>
#define deb(x...)
#endif 

using namespace std;

const int maxn = 2e5 + 100;
long long A[maxn], pref[maxn];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, q;
	cin >> n >> q;
	for(int i = 1; i <= n; i++){
		cin >> A[i];
		pref[i] = pref[i - 1] + A[i];
	}
	while(q--){
		int x, y;
		cin >> x >> y;
		cout << pref[y] - pref[x - 1] << '\n';
	}
	return 0;
}
// Write Here
