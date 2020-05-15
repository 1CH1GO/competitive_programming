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
	map<vector<int>, int> s;
	int c = 0;
	for(int i = 0; i < n; i++) {
		vector<int> v(5);
		for(int j = 0; j < 5; j++)cin >> v[j];
		sort(v.begin(), v.end());
		s[v]++;
		c = max(c, s[v]);
	}  
	int ans = 0;
	for(auto i:s)if(i.second == c)ans += i.second; 
	cout << ans << '\n';
	return 0;
}
// Write Here
