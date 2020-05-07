
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
int dist[1050][1050];
pair<int, int> src, des;
pair<int,int> par[1050][1050];
 
 
bool isValid(int x, int y){
	if(x >= 0 && x < n && y >= 0 && y < m && grid[x][y] != '#')return true;
	return false;
}
 
void bfs(int x, int y){
	par[x][y] = {-1, -1};
	used[x][y] = true;
	dist[x][y] = 0;
	queue<pair<int, int>> q;
	q.push({x, y}); 
	while(!q.empty()){
		auto u = q.front();
		q.pop();
		for(int i = 0; i < 4; ++i){
			int tx = u.first + dx[i];
			int ty = u.second + dy[i];
			if(isValid(tx, ty) && !used[tx][ty]){
				used[tx][ty] = true;
				dist[tx][ty] = dist[u.first][u.second] + 1;
				q.push({tx , ty}); 
				par[tx][ty] = u;
			}
		}
	}
}
string printpath(pair<int,int> x){
	vector<pair<int,int>> cors;
	for(auto i = x; i.first != -1 && i.second != -1; i = par[i.first][i.second])cors.push_back(i);
	deb(cors);
	reverse(cors.begin(), cors.end());
	string path;
	for(int i = 0; i < (int)cors.size() - 1; ++i){
		auto curr = cors[i], next = cors[i + 1];
		if(curr.second > next.second)path += 'L';
		if(curr.second < next.second)path += 'R';
		if(curr.first > next.first)path += 'U';
		if(curr.first < next.first)path += 'D';
	}
	return path;
}
int main() {
	FIO
 
	cin >> n >> m;
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < m; ++j){
			cin >> grid[i][j];
			if(grid[i][j] == 'A')src = {i, j};
			if(grid[i][j] == 'B')des = {i, j};
		}
	}
	bfs(src.first, src.second);
	if(used[des.first][des.second]){
		cout << "YES\n" << dist[des.first][des.second] << "\n";
		cout << printpath(des);
	}
	else cout << "NO\n";
}
