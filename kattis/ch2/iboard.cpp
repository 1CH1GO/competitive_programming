// 失敗するからこそ そこから立ち向かって行く強さがあってそんな強さが本当の強さだと私は思うから
#ifdef DAIJOBU
#include "/home/v-o_o-v/deb.h"
#define deb(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#include <bits/stdc++.h>
#define deb(x...)
#endif 

using namespace std;

string bin(int n){
	string s;
	while(n)s += to_string(n % 2), n /= 2;
	while(s.size() != 7)s = "0" + s;
	return s;
}

bool good(string s){
	int one_cnt = 0;
	for(auto ch: s)if(ch == '1')one_cnt++;
	if(one_cnt % 2 == 0 && (s.size() - one_cnt) % 2 == 0)return true;
	return false;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	while(getline(cin, s)){
		string binrep;
		for(int i = 0; i < (int)s.size(); i++){
			binrep += bin(int(s[i]));
		}
		if(good(binrep))puts("free");
		else puts("trapped");
	}
	return 0;	
}
// Write Here
