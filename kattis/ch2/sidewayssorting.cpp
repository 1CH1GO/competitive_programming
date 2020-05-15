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
	string tx, tt;
	for(auto i: s)tx += tolower(i);
	for(auto i: t)tt += tolower(i);
	return (tx < tt);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	while(cin >> n >> m){
		if(n == 0 && m == 0)break;
		vector<string> v;
		char mat[n][m];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> mat[i][j];
			}
		}
		for(int i = 0; i < m; i++){
			string s;
			for(int j = 0; j < n; j++){
				s += mat[j][i];
			}
			v.push_back(s);
		}
		stable_sort(v.begin(), v.end(), comp);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cout << v[j][i];
			}
			cout << '\n';
		}
		// deb(v);
		cout << '\n';
	}
	return 0;
}
// Write Here
