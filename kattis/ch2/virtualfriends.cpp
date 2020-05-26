// 失敗するからこそ そこから立ち向かって行く強さがあってそんな強さが本当の強さだと私は思うから
#ifdef DAIJOBU
#include "/home/v-o_o-v/deb.h"
#define deb(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#include <bits/stdc++.h>
#define deb(x...)
#endif 

using namespace std;

const int maxn = 1e5 + 100;
vector<int> Parent(maxn), Size(maxn);

void init(){
	for(int i = 0; i < maxn; i++){
		Parent[i] = i;
		Size[i] = 1;
	}
}

int root(int v){
	if(v == Parent[v])return v;
	return Parent[v] = root(Parent[v]);
}

void add(int u, int v){
	u = root(u);
	v = root(v);
	if(u != v){
		if(Size[u] < Size[v])swap(u, v);
		Parent[v] = u;
		Size[u] += Size[v];
	}
}

void solve(){
	int n;
	cin >> n;
	init();
	map<string, int> m;
	int cnt = 1;
	for(int i = 0; i < n; i++){
		string s, t;
		cin >> s >> t;
		if(m[s] == 0)m[s] = cnt++;
		if(m[t] == 0)m[t] = cnt++;
		add(m[s], m[t]);
		cout << max(Size[root(m[s])], Size[root(m[t])]) << '\n';
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}
// Write Here
