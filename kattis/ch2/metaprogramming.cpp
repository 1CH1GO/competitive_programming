// 失敗するからこそ そこから立ち向かって行く強さがあってそんな強さが本当の強さだと私は思うから
#ifdef DAIJOBU
#include "/home/v-o_o-v/deb.h"
#define deb(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#include <bits/stdc++.h>
#define deb(x...)
#endif 

using namespace std;

vector<string> tokenize(string s){
	s += " ";
	vector<string> ret;
	string t;
	for(auto ch: s){
		if(ch == ' ')ret.push_back(t), t.clear();
		else t += ch;
	}
	return ret;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	map<string, int> vars;
	while(getline(cin, s)){
		vector<string> v = tokenize(s);
		if(v.size() == 3){
			vars[v[2]] = stoi(v[1]);
		}else{
			if(vars.find(v[1]) != vars.end() && vars.find(v[3]) != vars.end()){
				int x = vars[v[1]], y = vars[v[3]];
				if(v[2] == ">"){if(x > y)puts("true");else puts("false");}
				else if(v[2] == "<"){if(x < y)puts("true");else puts("false");}
				else {if(x == y)puts("true");else puts("false");}
			}else puts("undefined");
		}
	}
	return 0;
}
// Write Here
