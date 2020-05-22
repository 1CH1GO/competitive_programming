// 失敗するからこそ そこから立ち向かって行く強さがあってそんな強さが本当の強さだと私は思うから
#ifdef DAIJOBU
#include "/home/v-o_o-v/deb.h"
#define deb(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#include <bits/stdc++.h>
#define deb(x...)
#endif 

using namespace std;

const int maxn = 2e5 + 100;
long long  A[maxn], tree[maxn], n, q;

void add(int id, long long del){
	while(id < maxn){
		tree[id] += del;
		id += (id & -id);
	}
}

long long int sum(int id){
	long long s = 0;
	while(id){
		s += tree[id];
		id -= (id & -id);
	}
	return s;
}

void init(){
	for(int i = 1; i <= n; i++){
		add(i, A[i]);
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> q;
	for(int i = 1; i <= n; i++)cin >> A[i];
	init();
	for(int i = 0; i < q; i++){
		long long op, x, y;
		cin >> op >> x >> y;
		if(op == 2){
			cout << sum(y) - sum(x - 1) << '\n';
		}else{
			add(x, -A[x]);
			add(x, y);
			A[x] = y;
		}
	}
	return 0;
}
// Write Here
