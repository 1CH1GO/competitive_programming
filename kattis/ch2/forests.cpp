// 失敗するからこそ そこから立ち向かって行く強さがあってそんな強さが本当の強さだと私は思うから
#ifdef DAIJOBU
#include "/home/v-o_o-v/deb.h"
#define deb(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#include <bits/stdc++.h>
#define deb(x...)
#endif 

using namespace std;

int maxn = 1e3, numSets;
vector<int> Parent(maxn);


int root(int v){
	if(v == Parent[v])return v;
	return Parent[v] = root(Parent[v]);
}

bool add(int a, int b){
	a = root(a);
	b = root(b);
	if(a != b){
		numSets--;
		Parent[b] = a;
		return true;
	}
	return false;
}

void init(){
	for(int i = 0; i < maxn; i++){
		Parent[i] = i;
	}
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> n >> m;
	init();
	numSets = n;
	vector<set<int>> grp(maxn);
	int u, v;
	while(cin >> u >> v){
		grp[u].insert(v);
	}
	for(int i = 1; i <= n; i++){
		for(int j = i + 1; j <= n; j++){
			if(grp[i] == grp[j])add(i, j);
		}
	}
	cout << numSets << '\n';
	return 0;
}
// Write Here
