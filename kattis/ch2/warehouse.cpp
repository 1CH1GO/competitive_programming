// 失敗するからこそ そこから立ち向かって行く強さがあってそんな強さが本当の強さだと私は思うから
#ifdef DAIJOBU
#include "/home/v-o_o-v/deb.h"
#define deb(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#include <bits/stdc++.h>
#define deb(x...)
#endif 

using namespace std;

bool comp(pair<string, int> a, pair<string, int> b){
	if(a.second > b.second)return true;
	if(a.second < b.second)return false;
	return a.first < b.first;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		map<string, int> m;
		for(int i = 0; i < n; i++){
			string s; int x;
			cin >> s >> x;
			m[s] += x;
		}
		vector<pair<string, int>> v;
		for(auto i: m)v.push_back({i.first, i.second});
		sort(v.begin(), v.end(), comp);
		cout << v.size() << '\n';
		for(auto el : v)cout << el.first << ' ' << el.second << '\n';
	}
	return 0;
}
// Write Here
