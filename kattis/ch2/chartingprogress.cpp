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
	int last = 0;
	vector<string> ans;
	while(getline(cin, s)){
		// deb(s);
		if(s == ""){
			cout << '\n';
			ans.clear();
			last = 0;
			continue;
		}else{
			vector<char> stars;
			for(auto i: s)if(i == '*')stars.push_back(i);
			string now(s.size(), '.');
			for(int i = last; i < last + stars.size(); i++)now[i] = '*';
			last += stars.size();
			reverse(now.begin(), now.end());
			for(auto i:now)cout << i;
			cout << '\n';
		}
	}
	return 0;
}
// Write Here
