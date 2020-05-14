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

	int n;
	string s;
	while(cin >> n){
		getline(cin, s);
		if(n == 0)break;
		map<string, set<string>> m;
		for(int i = 0; i < n; i++){
			getline(cin, s);
			s += " ";
			string word;
			vector<string> v;
			for(auto j:s){
				if(j == ' '){
					v.push_back(word);
					word.clear();
				}
				else word += j;
			}
			// deb(v);
			for(int j = 1; j <(int)v.size(); j++){
				m[v[j]].insert(v[0]);
			}
		}
		for(auto i:m){
			cout << i.first << ' ';
			for(auto j:i.second)cout << j << ' ';
			cout << '\n';
		}
		cout << '\n';
	}
	return 0;
}
// Write Here
