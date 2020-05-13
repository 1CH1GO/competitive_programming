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
	char grid[n][n];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++)cin >> grid[i][j];
	}
	for(int i = 0; i < n; i++){
		int cw = 0;
		for(int j = 0; j < n; j++){
			if(grid[i][j] == 'W')cw++;
		}
		if(cw == n / 2);
		else {
			cout << 0;
			return 0;
		}
		cw = 0;
		for(int j = 0; j < n; j++){
			if(grid[i][j] == 'B'){
				if(cw >= 3){
					cout << 0;
					return 0;
				}
				cw = 0;
			}else cw++;
		}
		cw = 0;
		for(int j = 0; j < n; j++){
			if(grid[i][j] == 'W'){
				if(cw >= 3){
					cout << 0;
					return 0;
				}
				cw = 0;
			}else cw++;
		}
	}
	for(int i = 0; i < n; i++){
		int cw = 0;
		for(int j = 0; j < n; j++){
			if(grid[j][i] == 'W')cw++;
		}
		if(cw == n / 2);
		else {
			cout << 0;
			return 0;
		}
		cw = 0;
		for(int j = 0; j < n; j++){
			if(grid[j][i] == 'B'){
				if(cw >= 3){
					cout << 0;
					return 0;
				}
				cw = 0;
			}else cw++;
		}
		cw = 0;
		for(int j = 0; j < n; j++){
			if(grid[j][i] == 'W'){
				if(cw >= 3){
					cout << 0;
					return 0;
				}
				cw = 0;
			}else cw++;
		}
	}
	cout << 1;
	return 0;
}
// Write Here
