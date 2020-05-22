// 失敗するからこそ そこから立ち向かって行く強さがあってそんな強さが本当の強さだと私は思うから
#ifdef DAIJOBU
#include "/home/v-o_o-v/deb.h"
#define deb(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#include <bits/stdc++.h>
#define deb(x...)
#endif 

using namespace std;

const int maxn = 5e6 + 100;
long long A[maxn], tree[maxn];

void add(int id, long long del){
	while(id < maxn){
		tree[id] += del;
		id += (id & -id);
	}
}

long long sum(int id){
	long long ret = 0;
	while(id){
		ret += tree[id];
		id -= (id & -id);
	}
	return ret;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		char op;
		cin >> op;
		if(op == '+'){
			int id, del;
			cin >> id >> del;
			id++;
			add(id, del);
		}else{
			int id;
			cin >> id;
			cout << sum(id) << '\n';
		}
	}
	return 0;
}
// Write Here
