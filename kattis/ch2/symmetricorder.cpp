// 失敗するからこそ そこから立ち向かって行く強さがあってそんな強さが本当の強さだと私は思うから
#ifdef DAIJOBU
#include "/home/v-o_o-v/deb.h"
#define deb(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#include <bits/stdc++.h>
#define deb(x...)
#endif 

using namespace std;

bool comp(string s, string t){
	return s.size() < t.size();
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	// cin >> n;
	int cas = 1;
	while(cin >> n){
		if(n == 0)break;
		vector<string> v;
		vector<string> first, last;
		for(int i = 0; i < n; i++){
			string s;
			cin >> s;
			v.push_back(s);
		}
		stable_sort(v.begin(), v.end(), comp);
		for(int i = 0; i < n; i++){
			if(i % 2 == 0)first.push_back(v[i]);
			else last.push_back(v[i]);
		}
		reverse(last.begin(), last.end());
		cout << "SET " << cas++ << '\n';
		for(auto i:first)cout << i << '\n';
		for(auto i:last)cout << i << '\n';
	}
	return 0;
}
// Write Here
