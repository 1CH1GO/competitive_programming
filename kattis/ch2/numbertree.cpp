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
	string s;
	cin >> s;
	if(s.size() == 0)cout << (1 << (n + 1)) - 1;
	else{
		long long ans = pow(2, n + 1) - 1;
		vector<long long> v;
		if(s[0] == 'L')v.push_back(1);
		else v.push_back(2);
		for(int i = 1; i < (int)s.size(); i++){
			if(s[i] == s[i - 1])v.push_back(2 * v[i - 1]);
			else if(s[i] == 'R' && s[i - 1] == 'L')v.push_back(2 * v[i - 1] + 1);
			else v.push_back(2 * v[i - 1] - 1);
		}
		for(auto i:v)ans -= i;
		cout << ans;
	}
	return 0;
}
// Write Here