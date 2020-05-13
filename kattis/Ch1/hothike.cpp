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
	int a[n];
	for(int i = 0; i < n; i++)cin >> a[i];
	int ans = 55, d;
	for(int i = 0; i < n - 2; i++){
		if(max(a[i], a[i + 2]) < ans){
			ans = max(a[i], a[i + 2]);
			d = i + 1;
		}
	}
	cout << d << ' ' << ans << '\n';
	return 0;
}
// Write Here
