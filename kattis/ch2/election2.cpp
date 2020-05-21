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
	cin.ignore();
	map<string, string> party;
	map<string, int> cnt;
	for(int i = 0; i < n; i++){
		string s, t;
		getline(cin, s);
		getline(cin, t);
		party[s] = t;
	}
	int q;
	cin >> q;
	cin.ignore();
	for(int i = 0; i < q; i++){
		string s;
		getline(cin, s);
		cnt[s]++;
	}
	int max_cnt = 0;
	for(auto el: cnt)max_cnt = max(max_cnt, el.second);
	vector<string> ans;
	for(auto el: cnt)if(el.second == max_cnt)ans.push_back(party[el.first]);
	if((int)ans.size() == 1){
		cout << ans[0] << '\n';
	}else cout << "tie\n";
	return 0;
}
// Write Here
