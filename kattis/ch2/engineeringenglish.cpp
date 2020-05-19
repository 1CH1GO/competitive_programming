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
	set<string> S;
	while(getline(cin, s)){
		vector<string> v;
		s += " ";
		string t;
		for(int i = 0; i < (int)s.size(); i++){
			if(s[i] == ' ')v.push_back(t), t.clear();
			else t += s[i];
		}
		// deb(v);
		for(auto str: v){
			string now;
			for(auto ch : str)now += tolower(ch);
			if(S.find(now) != S.end())cout << ". ";
			else {
				cout << str << " ";
				S.insert(now);
			}
		}
		cout << '\n';
	}
	return 0;
}
// Write Here
