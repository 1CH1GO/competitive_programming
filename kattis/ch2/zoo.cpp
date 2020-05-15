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
	int cas = 1;
	while(cin >> n){
		if(n == 0)break;
		map<string, int> m;
		string s;getline(cin, s); //waster
		for(int j = 0; j < n; j++){
			getline(cin, s);
			vector<string> v;
			string word;
			s += " ";
			for(auto i:s){
				if(i == ' '){
					v.push_back(word);
					word.clear();
				}else word += tolower(i);
			}
			m[v[v.size() - 1]]++;
		}
		cout << "List " << cas++ << ":\n";
		for(auto i:m)cout << i.first << " | " << i.second << '\n';
	}
	return 0;
}
// Write Here
