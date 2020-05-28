// 失敗するからこそ そこから立ち向かって行く強さがあってそんな強さが本当の強さだと私は思うから
#ifdef DAIJOBU
#include "/home/v-o_o-v/deb.h"
#define deb(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#include <bits/stdc++.h>
#define deb(x...)
#endif 

using namespace std;

bool ok(string s){
	for(auto ch: s)if(ch == '?')return false;
	return true;
}
set<int> pos;
void gen(string s){
	if(ok(s)){
		// deb(s);
		string t = s;
		reverse(t.begin(), t.end());
		if(t == s)pos.insert(stoi(s));
		return ;
	}else{
		for(int i = 0; i < 6; i++){
			if(s[i] == '?'){
				for(char c = '0'; c <= '9'; c++){
					s[i] = c;
					gen(s);
				}
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s(6, '?');
	gen(s);
	// deb(pos.size());
	int q;
	cin >> q;
	while(q--){
		int n;
		cin >> n;
		int min_diff = 1e6, ans = -1;
		for(auto num: pos){
			if(abs(num - n) < min_diff){
				min_diff = abs(num - n);
				ans = num;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}
// Write Here
