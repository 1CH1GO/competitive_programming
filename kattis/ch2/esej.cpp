// 失敗するからこそ そこから立ち向かって行く強さがあってそんな強さが本当の強さだと私は思うから
#ifdef DAIJOBU
#include "/home/v-o_o-v/deb.h"
#define deb(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#include <bits/stdc++.h>
#define deb(x...)
#endif 

using namespace std;

vector<string> pos;

bool ok(string s){
	for(auto ch: s)if(ch == '?')return false;
	return true;
}

void gen(string s){
	if(ok(s))pos.push_back(s);
	else{
		for(int i = 0; i < (int)s.size(); i++){
			if(s[i] == '?'){
				for(char c = 'a'; c <= 'z'; c++){
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

	for(int i = 1; i <= 4; i++){
		string s(i, '?');
		gen(s);
	}
	deb(pos.size());
	int a, b;
	cin >> a >> b;
	while(b--)cout << pos[b] << ' ';
	return 0;
}
// Write Here
