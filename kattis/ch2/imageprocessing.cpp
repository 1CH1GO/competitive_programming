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

	int h, w, n, m;
	cin >> h >> w >> n >> m;
	int A[h][w], B[n][m];
	for(int i = 0; i < h; i++){
		for(int j = 0; j < w; j++)cin >> A[i][j];
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++)cin >> B[i][j];
	}
	vector<vector<int>> ans;
	ans.resize(h - n + 1);
	for(int i = 0; i <= h - n; i++){
		for(int j = 0; j <= w - m; j++){
			// sub array
			int sum = 0;
			for(int k = i; k < i + n; k++){
				for(int l = j; l < j + m; l++){
					sum += A[k][l] * B[n - (k - i) - 1][m - (l - j) - 1];
					// cout << A[k][l] << ' ';
				}
				// cout << '\n';
			}
			ans[i].push_back(sum);
			// deb(sum);
		}
	}
	for(auto rows: ans){
		for(auto cols: rows)cout << cols << ' ';
		cout << '\n';
	}
	return 0;
}
// Write Here
