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
 
const int MAX_N = 1e5 + 100;
 
vector<int> adj[MAX_N];
bool used[MAX_N];
vector<int> par(MAX_N), path;
 
void bfs(int s){
	used[s] = true;
	par[s] = -1;
	queue<int> q;
	q.push(s);
	while(!q.empty()){
		auto u = q.front();
		q.pop();
		for(auto i:adj[u]){
			if(!used[i]){
				used[i] = true;
				par[i] = u;
				q.push(i);
			}
		}
	}
	
}
void printpath(int des){
	if(!used[des])cout << "IMPOSSIBLE\n";
	else{
		for(int i = des; i != -1; i = par[i])path.push_back(i);
		reverse(path.begin(), path.end());
		cout << path.size() << "\n";
		for(auto i:path)cout << i << " ";
	}
}
 
int main() {
	FIO
 
	int n, m;cin >> n >> m;
	for(int i = 0; i < m; ++i){
		int u, v;cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	bfs(1);
	printpath(n);
	return 0;
}