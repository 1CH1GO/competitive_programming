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

	string s;
	getline(cin, s);
	string word;
	s += " ";
	map<string, int> m;
	for(int i = 0; i < (int)s.size(); i++){
		if(s[i] == ' '){
			if(m[word] == 0){
				m[word] = 1;
				word.clear();
			}else{
				cout << "no";
				return 0;
			}
		}else word += s[i];
	}
	cout << "yes";
	return 0;
}
// Write Here
