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
		int a[21];
		map<int, int> pos, spos;
		cin >> a[0];
		for(int i = 1; i < 21; i++){
			cin >> a[i];
		}
		int ans = 0;
		for(int i = 1; i < 21; i++){
			int min = i;
			for(int j = i + 1; j < 21; j++){
				if(a[j] < a[min])min = j;
			}
			ans += min - i;
			for(int j = min; j >= i + 1; j--)swap(a[j], a[j - 1]);
		}
		cout << a[0] << ' ' << ans << '\n';
	}
	return 0;
}
// Write Here
