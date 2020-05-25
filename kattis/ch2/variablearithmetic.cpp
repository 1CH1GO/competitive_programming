// 失敗するからこそ そこから立ち向かって行く強さがあってそんな強さが本当の強さだと私は思うから
#ifdef DAIJOBU
#include "/home/v-o_o-v/deb.h"
#define deb(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#include <bits/stdc++.h>
#define deb(x...)
#endif 

using namespace std;

bool isnum(string s){
	if(s == "+")return false;
	for(auto ch : s)if(isalpha(ch))return false;
	return true;
}

vector<string> token(string s){
	vector<string> ret;
	string t;
	s += " ";
	for(auto ch: s){
		if(ch == ' ')ret.push_back(t), t.clear();
		else t += ch;
	}
	return ret;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	map<string, int> defs;
	string s;
	while(getline(cin, s)){
		if(s == "0")break;
		vector<string> v = token(s), z;
		// deb(v);
		if(v.size() == 1){
			if(isnum(v[0]))cout << v[0] << '\n';
			else {
				if(defs.find(v[0]) != defs.end())cout << defs[v[0]] << '\n';
				else cout << v[0] << '\n';
			}
			continue;
		}
		if(v[1] == "="){
			// deb("kk");
			assert(isnum(v[2]));
			defs[v[0]] = stoi(v[2]);
			continue;
		}
		int now = 0;
		for(auto str : v){
			if(isnum(str))now += stoi(str);
			else{
				if(str != "+"){
					if(defs.find(str) != defs.end())now += defs[str];
					else z.push_back(str);
				}
			}
		}
		if(now){
			cout << now;
			for(auto str: z){
				cout << " + " << str;
			}
		}else{
			if(z.size()){
				for(int i = 0; i < (int)z.size(); i++){
					if(i >= 1)cout << " + ";
					cout << z[i];
				}
			}else cout << 0;
		}
		cout << '\n';
	}
	return 0;
}
// Write Here
