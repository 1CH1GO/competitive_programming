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

	int r, c;
	cin >> r >> c;
	char mat[r][c];
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++)cin >> mat[i][j];
	}
	int ans = 0;
	for(int i = 0; i < c; i++){
		int cnt = 0;
		for(int j = 0; j < r; j++){
			if(mat[j][i] == '_')cnt++;
		}
		if(cnt == r)ans++;
	}
	cout << ans + 1 << '\n';
	return 0;
}
// Write Here
