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

	int n, p, m;
	cin >> n >> p >> m;
	map<string, int> cnt;
	set<string> done;
	bool ok = false;
	for(int i = 0; i < n; i++){
		string s;
		cin >> s;
	}
	for(int i = 0; i < m; i++){
		string s;
		int sc;
		cin >> s >> sc;
		cnt[s] += sc;
		if(cnt[s] >= p && done.find(s) == done.end()){
			ok = true;
			cout << s << " wins!" << '\n';
			done.insert(s);
		}
	}
	if(!ok)puts("No winner!");
	return 0;
}
// Write Here
