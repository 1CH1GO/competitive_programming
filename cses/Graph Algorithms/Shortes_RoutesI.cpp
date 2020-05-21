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
vector<long long> dist(MAX_N);
vector<pair<int, long long> > adj[MAX_N];
bool done[MAX_N];
int n, m;
 
void Dijkstra(int s){
	for(int i = 1; i <= n; ++i)dist[i] = inf;
	dist[s] = 0;
	priority_queue<pair<long long, int> > q;
	q.push({0, s});
	while(!q.empty()){
		int a = q.top().second;
		q.pop();
		if(done[a])continue;
		done[a] = true;
		for(auto u:adj[a]){
			int b = u.first; long long wt = u.second;
			if(dist[b] >  dist[a] + wt){
				dist[b] = dist[a] + wt;
				q.push({-dist[b], b});
			}
		}
	}
}
	
int main() {
	FIO
 
	cin >> n >> m;
	for(int i = 0; i < m; ++i){
		int a, b, w;cin >> a >> b >> w;
		adj[a].emplace_back(b, w);
		//adj[b].emplace_back(a, w);
	}
	Dijkstra(1);
	for(int i = 1; i <= n; ++i)cout << dist[i] << " ";
	return 0;
}