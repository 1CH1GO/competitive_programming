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
 
 
 
int main() {
	FIO
 
	int n, m;cin >> n >> m;
	for(int i = 0; i < m; ++i){
		int u, v;cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	vector<int> side(MAX_N, -1), groups[2];
 
	for(int i = 1; i <= n; ++i){
		if(side[i] == -1){
			queue<int> q;
			q.push(i);
			side[i] = 0;
			while(!q.empty()){
				auto u = q.front();
				q.pop();
				groups[side[u]].push_back(u);
				for(auto v:adj[u]){
					if(side[v] == -1){
						side[v] = side[u] ^ 1;
						q.push(v);
					}
					else if(side[v] == side[u]){
						cout << "IMPOSSIBLE\n";
						return 0;
					}
				}	
			}
		}
	}
	for(int i = 1; i <= n; ++i)cout << 2 - side[i] << " ";
	return 0;
}