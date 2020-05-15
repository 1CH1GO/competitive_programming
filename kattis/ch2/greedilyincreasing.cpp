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
	vector<int> a(n), ans;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	ans.push_back(a[0]);
	for(int i = 1; i < n; i++){
		if(a[i] > ans.back())ans.push_back(a[i]);
	}
	cout << ans.size() << '\n';
	for(auto i:ans)cout << i << ' ';
	return 0;
}
// Write Here
