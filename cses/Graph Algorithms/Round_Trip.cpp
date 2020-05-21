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
int start, stop;
 
void dfs(int s){
	used[s] = true;
	for(auto i:adj[s]){
		if(!used[i]){
			par[i] = s;
			dfs(i);
		}
		else if(i != par[s]){
			start = s;
			stop = i;
		}
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
	for(int i = 1; i <= n; i++){
		if(!used[i]){
			start = -1;
			par[i] = -1;
			dfs(i);
			if(start != -1 && stop != -1){
				vector<int> cycle;
				for(int j = stop; j != par[start]; j = par[j])cycle.push_back(j);
				reverse(cycle.begin(), cycle.end());
				cout << cycle.size() + 1 << "\n";
				for(auto j:cycle)cout << j << " ";
				cout << start;
				return 0;
			}
			//deb(start, stop);
		}
	}
	cout << "IMPOSSIBLE";
	return 0;
}
