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

	string s, t;
	cin >> s >> t;
	reverse(s.begin(), s.end());
	reverse(t.begin(), t.end());
	if(s.size() > t.size()){
		while(t.size() != s.size())t += "0";
	}else{
		while(s.size() != t.size())s += "0";
	}
	// deb(s, t);
	int carry = 0;
	string ans;
	for(int i = 0; i < (int)s.size(); i++){
		int x = s[i] - '0', y = t[i] - '0';
		int add = (x + y + carry) % 10;
		ans += add + '0';
		carry = (x + y + carry) / 10;
	}
	if(carry)ans += to_string(carry);
	reverse(ans.begin(), ans.end());
	cout << ans << '\n';
	return 0;
}
// Write Here
