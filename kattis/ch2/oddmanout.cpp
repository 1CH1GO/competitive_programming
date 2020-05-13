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
	int cas = 1;
	while(t--){
		int n;
		cin >> n;
		map<int, int> cnt;
		for(int i = 0; i < n; i++){
			int x;
			cin >> x;
			cnt[x]++;
		}
		cout << "Case #" << cas++ << ": ";
		for(auto i:cnt)if(i.second % 2)cout << i.first << ' ';
		cout << '\n';
	}
	return 0;
}
// Write Here
