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
	int min_cnt = 15000;
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		string s;
		cin >> s;
		m[s]++;
	}
	for(auto i:m){
		min_cnt = min(min_cnt, i.second);
	}
	vector<string> v;
	for(auto el: m)if(el.second == min_cnt)v.push_back(el.first);
	sort(v.begin(), v.end());
	for(auto str: v)cout << str << '\n';
	return 0;
}
// Write Here
