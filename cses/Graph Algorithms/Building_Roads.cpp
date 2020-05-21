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
 
void dfs(int s){
	used[s] = true;
	for(auto u:adj[s]){
		if(!used[u])
			dfs(u);
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
	dfs(1);
	vector<int> edges;
	for(int i = 2; i <= n; ++i){
		if(!used[i]){
			edges.push_back(i);
			dfs(i);
		}
	}
	cout << edges.size() << "\n";
	for(auto i:edges)cout << 1 << " " << i << "\n";
	return 0;
}