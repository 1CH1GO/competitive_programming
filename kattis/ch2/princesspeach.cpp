// 失敗するからこそ そこから立ち向かって行く強さがあってそんな強さが本当の強さだと私は思うから
#ifdef DAIJOBU
#include "/home/v-o_o-v/deb.h"
#define deb(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#include <bits/stdc++.h>
#define deb(x...)
#endif 

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, q;
	cin >> n >> q;
	set<int> s, z;
	for(int i = 0; i < n; i++)s.insert(i);
	for(int i = 0; i < q; i++){
		int x;
		cin >> x;
		s.erase(x);
		z.insert(x);
	}
	for(auto el : s)cout << el << '\n';
	cout << "Mario got " << z.size() << " of the dangerous obstacles.\n";
	return 0;
}
// Write Here
