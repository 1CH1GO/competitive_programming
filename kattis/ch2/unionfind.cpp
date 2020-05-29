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
vector<int> Parent(maxn), Size(maxn);

int root(int v){
	if(v == Parent[v])return v;
	return Parent[v] = root(Parent[v]);
}

bool add(int a, int b){
	a = root(a);
	b = root(b);
	if(a != b){
		if(Size[a] < Size[b])swap(a, b);
		Parent[b] = a;
		Size[a] += Size[b];
	}
	return false;
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

	int n, q;
	cin >> n >> q;
	init();
	while(q--){
		char op;
		int a, b;
		cin >> op >> a >> b;
		if(op == '=')add(a, b);
		else {
			if(root(a) == root(b))puts("yes");
			else puts("no");
		}
	}
	return 0;
}
// Write Here
