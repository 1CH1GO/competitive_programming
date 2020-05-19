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
		int n, m;
		cin >> n >> m;
		char mat[n][m];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)cin >> mat[i][j];
		}
		string ans;
		for(int i = 0; i < m; i++){
			int one_cnt = 0;
			for(int j = 0; j < n; j++)if((mat[j][i] == '1'))one_cnt++;
			if(one_cnt > n - one_cnt)ans += '1';
			else ans += '0';
		}
		cout << ans << '\n';
	}
	return 0;
}
// Write Here
