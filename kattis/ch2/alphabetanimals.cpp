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

	string s;
	cin >> s;
	int n;
	cin >> n;
	map<char, deque<string>> m;
	for(int i = 0; i < n; i++){
		string t;
		cin >> t;
		m[t[0]].push_back(t);
	}
	if((int)m[s[s.size() - 1]].size() == 0)cout << "?\n";
	else {
		for(int i = 0; i < (int)m[s[s.size() - 1]].size(); i++){
			string chosen = m[s[s.size() - 1]][i];
			if(chosen[chosen.size() - 1] == chosen[0]){
				if(m[chosen[chosen.size() - 1]].size() - 1 == 0){
					cout << chosen << "!\n";
					return 0;
				}
			}
			else if(m[chosen[chosen.size() - 1]].size() == 0){
				cout << chosen << "!\n";
				return 0;
			}
		}
		cout << m[s[s.size() - 1]].front() << '\n';
	}
	return 0;
}
// Write Here
