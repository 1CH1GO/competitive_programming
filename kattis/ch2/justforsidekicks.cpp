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
vector<long long> P(7);
vector<vector<long long>> tree(maxn, vector<long long>(7, 0));

void add(int id, int el, int del){
	while(id < maxn){
		tree[id][el] += del;
		id += (id & -id);
	}
}

long long sum(int id){
	long long ret = 0;
	while(id){
		for(int i = 0; i < (int)tree[id].size(); i++)ret += (P[i] * tree[id][i]);
		id -= (id & -id);
	}
	return ret;
}

long long rsum(int l, int r){
	return sum(r) - sum(l - 1);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, q;
	cin >> n >> q;
	for(int i = 1; i <= 6; i++)cin >> P[i];
	string s;
	cin >> s;
	for(int i = 1; i <= n; i++){
		add(i, s[i - 1] - '0', 1);
	}
	while(q--){
		int op, a, b;
		cin >> op >> a >> b;
		if(op == 1){
			add(a, s[a - 1] - '0', -1);
			add(a, b, 1);
			s[a - 1] = b + '0';
		}else if(op == 2){
			P[a] = b;
		}else{
			cout << rsum(a, b) << '\n';
		}
	}
	return 0;
}
// Write Here
