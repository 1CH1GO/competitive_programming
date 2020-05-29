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

	int n;
	cin >> n;
	vector<string> a(n);
	for(int i = 0; i < n; i++)cin >> a[i];
	int last = -1;
	list<int> l[n];
	for(int i = 0; i < n; i++){
		l[i].emplace_back(i);
	}
	for(int i = 0; i < n - 1; i++){
		int x, y;
		cin >> x >> y;
		x--;y--;
		l[x].splice(l[x].end(), l[y]);
		last = x;
		
	}
	if(last == -1)cout << a[0] << '\n';
	else{
		for(auto el: l[last])cout << a[el];
	}
	return 0;
}
// Write Here
