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

	map<string, string> m;
	string s;
	while(getline(cin, s)){
		if(s == "")break;
		vector<string> words;
		s += " ";
		string t;
		for(auto ch: s){
			if(ch == ' ')words.push_back(t), t.clear();
			else t += ch;
		}
		m[words[1]] = words[0];
	}
	while(getline(cin, s)){
		if(m[s].size())cout << m[s] << '\n';
		else cout << "eh\n";
	}
	return 0;
}
// Write Here
