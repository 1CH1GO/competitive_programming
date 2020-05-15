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

	int r, q;
	cin >> r >> q;
	set<int> s;
	for(int i = 1; i <= r; i++)s.insert(i);
	for(int i = 0; i < q; i++){
		int x;
		cin >> x;
		s.erase(x);
	}
	if((int)s.size() == 0)cout << "too late\n";
	else cout << *s.begin() << '\n';
	return 0;
}
// Write Here
