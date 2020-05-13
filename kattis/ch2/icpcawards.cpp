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
	vector<string> v, ans;
	for(int i = 0; i < n; i++){
		string s, t;
		cin >> s >> t;
		if((int)v.size() == 12)continue;
		if(find(v.begin(), v.end(), s) == v.end()){
			v.push_back(s);
			ans.push_back(s + " " + t);
		}
		// cout << s << '\n';
	}
	for(auto i:ans)cout << i << '\n';
	return 0;
}
// Write Here
