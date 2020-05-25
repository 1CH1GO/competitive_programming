// 失敗するからこそ そこから立ち向かって行く強さがあってそんな強さが本当の強さだと私は思うから
#ifdef DAIJOBU
#include "/home/v-o_o-v/deb.h"
#define deb(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#include <bits/stdc++.h>
#define deb(x...)
#endif 

using namespace std;

const int maxn = 1e6 + 100;
vector<int> Parent(maxn), Rank(maxn), Size(maxn);

int find(int v){
	if(v == Parent[v])return v;
	return Parent[v] = find(Parent[v]);
}

bool add(int u, int v){
	u = find(u);
	v = find(v);
	if(u == v)return false;
	if(Size[u] < Size[v])swap(u, v);
	Parent[v] = u;
	Size[u] += Size[v];
	return true;
}

void init(){
	for(int i = 0; i < maxn; i++){
		Parent[i] = i;
		Size[i] = 1;
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	init();
	int n, q;
	cin >> n >> q;
	while(q--){
		char op;
		cin >> op;
		if(op == 's'){
			int u;
			cin >> u;
			cout << Size[find(u)] << '\n';
		}else{
			int u, v;
			cin >> u >> v;
			add(u, v);
		}
	}
	return 0;
}
// Write Here
