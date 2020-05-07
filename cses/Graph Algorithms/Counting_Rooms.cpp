//失敗するからこそそこから立ち向かって行く強さがあってそんな強さが本当の強さだと私は思うから
// ぜったいあきらめない
#include<bits/stdc++.h>
using namespace std;
 
#if defined(DAIJOBU)
#include "/home/pavan/debug.hpp"
#define deb(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define deb(x...)
#endif
#define FIO {ios::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);}
 
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};
int n, m;
char grid[1050][1050];
bool used[1050][1050];
 
bool isValid(int x, int y){
	if(x >= 0 && x < n && y >= 0 && y < m && grid[x][y] != '#')return true;
	return false;
}
 
void dfs(int x, int y){
	used[x][y] = true;
	for(int i = 0; i < 4; ++i){
		int tx = x + dx[i];
		int ty = y + dy[i];
		if(isValid(tx, ty) && !used[tx][ty]){
			dfs(tx, ty);
		}
	}
}
int main() {
	FIO
 
	cin >> n >> m;
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < m; ++j)cin >> grid[i][j];
	}
	int ans = 0;
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < m; ++j){
			if(grid[i][j] == '.' && !used[i][j]){
				ans++;
				dfs(i, j);
			}
		}
	}
	cout << ans;
	return 0;
}
