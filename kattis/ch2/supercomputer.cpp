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
int A[maxn], tree[maxn];

void add(int id, int del){
	while(id < maxn){
		tree[id] += del;
		id += (id & -id);
	}
}

int sum(int id){
	int ret = 0;
	while(id){
		ret += tree[id];
		id -= (id & -id);
	}
	return ret;
}

int rsum(int l, int r){
	return sum(r) - sum(l - 1);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, q;
	cin >> n >> q;
	while(q--){
		char op;
		cin >> op;
		if(op == 'F'){
			int ind;
			cin >> ind;
			if(A[ind]){
				A[ind] = 0;
				add(ind, -1);
			}else{
				A[ind] = 1;
				add(ind, 1);
			}
		}else{
			int l, r;
			cin >> l >> r;
			cout << rsum(l, r) << '\n'; 
		}
	}
	return 0;
}
// Write Here
