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
	map<string, long double> finale;
	map<string, int> log;
	int day = 1;
	while(getline(cin, s)){
		if(s == "CLOSE"){
			cout << "Day " << day++ << '\n';
			for(auto i: finale){
				cout << i.first << ' ' << "$" << fixed << setprecision(2) << i.second << '\n';
			}
			cout << '\n';
			log.clear();
			finale.clear();
			continue;
		}
		if(s == "OPEN")continue;
		vector<string> v;
		s += " ";
		string t;
		for(int i = 0; i < (int)s.size(); i++){
			if(s[i] == ' '){
				v.push_back(t);
				t.clear();
			}else t += s[i];
		}
		// deb(v);
		if(v[0] == "ENTER"){
			log[v[1]] = stoi(v[2]);
		}else{
			finale[v[1]] += (stoi(v[2]) - log[v[1]]) * 0.1;
		}
		// deb(log);
	}
	return 0;
}
// Write Here
