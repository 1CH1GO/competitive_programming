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

	map<string, int> m;
	string s;
	while(getline(cin, s)){
		if(s == "***")break;
		m[s]++;
	}
	int max_cnt = 0;
	for(auto i: m)max_cnt = max(max_cnt, i.second);
	vector<string> v;
	for(auto i: m)if(i.second == max_cnt)v.push_back(i.first);
	if((int)v.size() == 1)cout << v[0] << '\n';
	else cout << "Runoff!\n";
	return 0;
}
// Write Here
