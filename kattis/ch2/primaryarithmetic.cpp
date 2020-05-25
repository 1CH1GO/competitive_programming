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
	while(cin >> s >> t){
		int ans = 0;
		if(s == "0" && t == "0")break;
		int carry = 0;
		int msize = max(s.size(), t.size());
		while((int)s.size() != msize)s = "0" + s;
		while((int)t.size() != msize)t = "0" + t;
		reverse(s.begin(), s.end());
		reverse(t.begin(), t.end());
		for(int i = 0; i < msize; i++){
			if(carry)ans++;
			int now = s[i] - '0' + t[i] - '0' + carry;
			carry = now / 10;
		}
		if(carry)ans++;
		if(ans){
			if(ans == 1)cout << "1 carry operation.\n";
			else cout << ans << " carry operations.\n";
		}else cout << "No carry operation.\n";
	}
	return 0;
}
// Write Here
