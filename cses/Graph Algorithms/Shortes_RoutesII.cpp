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
 
const long long inf = 1e18;
const int MAX_N = 1e5 + 100;
int n, m, q;
long long adj[550][550], dp[550][550];
 
void Floyd_Warshall(int s){
	for(int i = 1; i <= n; ++i){
		for(int j = 1; j <= n; ++j){
			if(i == j)dp[i][j] = 0;
			else if(adj[i][j])dp[i][j] = adj[i][j];
			else dp[i][j] = inf;
		}
	}
	
	for(int k = 1; k <= n; ++k){
		for(int i = 1; i <= n; ++i){
			for(int j = 1; j <= n; ++j){
				dp[i][j] = min (dp[i][j], dp[i][k] + dp[k][j]);
			}
		}
	}
}
 
int main() {
	FIO
 
	cin >> n >> m >> q;
	for(int i = 1; i <= n; ++i){
		for(int j = 1; j <= n; ++j){
			adj[i][j] = inf;
		}
	}
	for(int i = 0; i < m; ++i){
		long long a, b, w;cin >> a >> b >> w;
		adj[a][b] = adj[b][a] = min(adj[a][b], w);
	}
	Floyd_Warshall(1);
	while(q--){
		int a, b;cin >> a >> b;
		if(dp[a][b] == inf)cout << "-1\n";
		else cout << dp[a][b] << "\n";
	}
	return 0;
}