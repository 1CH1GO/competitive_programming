// 失敗するからこそ そこから立ち向かって行く強さがあってそんな強さが本当の強さだと私は思うから
#ifdef DAIJOBU
#include "/home/v-o_o-v/deb.h"
#define deb(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#include <bits/stdc++.h>
#define deb(x...)
#endif 

using namespace std;

int grid[5500][5500];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	map<int, int> X, Y, diag1, diag2;
	for(int i = 0; i < n; i++){
		int x, y;
		cin >> x >> y;
		grid[x][y] = 1;
		X[x]++;
		Y[y]++;
		diag1[n - x + y]++;
		diag2[x + y]++;
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(grid[i][j]){
				if(X[i] > 1 || Y[j] > 1 || diag1[n - i + j] > 1 || diag2[i + j] > 1){
					cout << "INCORRECT\n";
					return 0;
				}
			}
		}
	}
	cout << "CORRECT\n";
	return 0;
}
// Write Here
