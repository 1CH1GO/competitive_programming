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
	s = s.substr(0, 2);
	t = t.substr(0, 2);
	return s < t;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	while(cin >> n){
		if(n == 0)break;
		vector<string> v;
		for(int i = 0; i < n; i++){
			string s;
			cin >> s;
			v.push_back(s);
		}
		stable_sort(v.begin(), v.end(), comp);
		for(auto str : v)cout << str << '\n';
		cout << '\n';
	}
	return 0;
}
// Write Here
