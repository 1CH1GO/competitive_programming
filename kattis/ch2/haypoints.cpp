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

	int m, n;
	cin >> m >> n;
	map<string, int> sals;
	for(int i = 0; i < m; i++){
		string s;
		int a;
		cin >> s >> a;
		sals[s] = a;
	}
	while(n--){
		string s;
		int ans = 0;
		while(getline(cin, s)){
			if(s == ".")break;
			s += " ";
			string t;
			for(int i = 0; i < (int)s.size(); i++){
				if(s[i] == ' '){
					ans += sals[t];
					t.clear();
				}else t += s[i];
			}
		}
		cout << ans << '\n';
	}
	return 0;
}
// Write Here
