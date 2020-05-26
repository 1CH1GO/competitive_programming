// 失敗するからこそ そこから立ち向かって行く強さがあってそんな強さが本当の強さだと私は思うから
#ifdef DAIJOBU
#include "/home/v-o_o-v/deb.h"
#define deb(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#include <bits/stdc++.h>
#define deb(x...)
#endif 

using namespace std;

vector<string> token(string s){
	vector<string> ret;
	s += " ";
	string t;
	for(auto ch : s){
		if(ch == ' ')ret.push_back(t), t.clear();
		else t += ch;
	}
	return ret;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	map<string, vector<string>> cat;
	map<string, int> cnts;
	for(int i = 0; i < n; i++){
		string s;
		cin >> s;
		int x;
		cin >> x;
		for(int j = 0; j < x; j++){
			string t;
			cin >> t;
			cat[s].push_back(t);
		}
	}
	cin.ignore();	
	string s;
	while(getline(cin, s)){
		// deb(s);
		vector<string> v = token(s);
		// deb(v);
		for(auto str: v){
			for(auto el: cat){
				for(auto now: el.second)if(now == str)cnts[el.first]++;
			}
		}
	}
	if(cnts.size()){
		int max_cnt = 0;
		for(auto el: cnts)max_cnt = max(max_cnt, el.second);
		for(auto el: cnts)if(el.second == max_cnt)cout << el.first << '\n';
		// deb(cnts);
	}else{
		for(auto el: cat)cout << el.first << '\n';
	}
	return 0;
}
// Write Here
