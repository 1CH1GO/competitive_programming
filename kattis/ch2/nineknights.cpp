// 失敗するからこそ そこから立ち向かって行く強さがあってそんな強さが本当の強さだと私は思うから
#ifdef DAIJOBU
#include "/home/v-o_o-v/deb.h"
#define deb(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#include <bits/stdc++.h>
#define deb(x...)
#endif 

using namespace std;

char grid[50][50];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	memset(grid, '.', sizeof grid);
	int c = 0;
	for(int i = 3; i < 8; i++){
		for(int j = 3; j < 8; j++){
			cin >> grid[i][j];
			if(grid[i][j] == 'k')c++;
		}
	}
	for(int i = 3; i < 8; i++){
		for(int j = 3; j < 8; j++){
			if(grid[i][j] == 'k'){
				if(grid[i - 2][j - 1] == 'k'){
					cout << "invalid";
					return 0;
				}
				if(grid[i - 2][j + 1] == 'k'){
					cout << "invalid";
					return 0;
				}
				if(grid[i + 2][j - 1] == 'k'){
					cout << "invalid";
					return 0;
				}
				if(grid[i + 2][j + 1] == 'k'){
					cout << "invalid";
					return 0;
				}
				if(grid[i - 1][j - 2] == 'k'){
					cout << "invalid";
					return 0;
				}
				if(grid[i - 1][j + 2] == 'k'){
					cout << "invalid";
					return 0;
				}
				if(grid[i + 1][j - 2] == 'k'){
					cout << "invalid";
					return 0;
				}
				if(grid[i + 1][j + 2] == 'k'){
					cout << "invalid";
					return 0;
				}

			}
		}
	}
	if(c != 9)cout << "invalid";
	else cout << "valid";
	return 0;
}
// Write Here
