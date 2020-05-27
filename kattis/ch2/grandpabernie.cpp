// 失敗するからこそ そこから立ち向かって行く強さがあってそんな強さが本当の強さだと私は思うから
#ifdef DAIJOBU
#include "/home/v-o_o-v/deb.h"
#define deb(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#include <bits/stdc++.h>
#define deb(x...)
#endif 

using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

typedef tree<pair<int, int>,null_type,less<pair<int, int>>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	map<string, indexed_set> visits;
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		string s;
		int year;
		cin >> s >> year;
		visits[s].insert({year, visits[s].size()});
	}
	int q;
	cin >> q;
	while(q--){
		string s;
		int k;
		cin >> s >> k;
		cout << visits[s].find_by_order(k - 1)  -> first << '\n';
	}
	return 0;
}
// Write Here
