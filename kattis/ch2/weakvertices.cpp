// 失敗するからこそ そこから立ち向かって行く強さがあってそんな強さが本当の強さだと私は思うから
#ifdef DAIJOBU
#include "/home/v-o_o-v/deb.h"
#define deb(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#include <bits/stdc++.h>
#define deb(x...)
#endif 
#define all(x) (x).begin(), (x).end()
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	while(cin >> n){
		if(n == -1)break;
		vector<int> adj[n];
		int grid[n][n];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> grid[i][j];
				if(grid[i][j]){
					adj[i].push_back(j);
				}
			}
			// deb(adj[i]);
		}
		for(int k = 0; k < n; k++){
			if((int)adj[k].size() <= 1)cout << k << ' ';
			else if((int)adj[k].size() >= 2){
				vector<int> v = adj[k];
				bool ok = false;
				for(int i = 0; i < (int)v.size(); i++){
					for(int j = i  + 1; j < (int)v.size(); j++){
						if(find(all(adj[v[i]]), v[j]) != adj[v[i]].end() &&
						   find(all(adj[v[j]]), v[i]) != adj[v[i]].end()){
							   ok = true;
						   }
					}
				}
				if(!ok)cout << k << ' ';
			}
		}
		cout << '\n';
	}
	return 0;
}
// Write Here
