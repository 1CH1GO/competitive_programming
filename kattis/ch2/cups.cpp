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
	cin >> n;
	set<pair<int, string>> st;
	for(int i = 0; i < n; i++){
		string s, t;
		cin >> s >> t;
		bool ok = true;
		for(auto j:s)ok &= isdigit(j);
		if(ok){
			st.insert({stoi(s) / 2, t});
		}else{
			st.insert({stoi(t), s});
		}
	}
	for(auto i:st)cout << i.second << '\n';
	return 0;
}
// Write Here
