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
	vector<string> v(n);
	set<string> s;
	for(int i = 0; i < n; i++)cin >> v[i];
	s.insert(v[0]);
	for(int i = 1; i < n; i++){
		if(v[i][0] != v[i - 1][v[i - 1].size() - 1]){
			if(i % 2){
				cout << "Player 2 lost\n";
				return 0;
			}else {
				cout << "Player 1 lost\n";
				return 0;
			}
		}else if(s.find(v[i]) != s.end()){
			if(i % 2){
				cout << "Player 2 lost\n";
				return 0;
			}else {
				cout << "Player 1 lost\n";
				return 0;
			}
		}else s.insert(v[i]);
	}
	cout << "Fair Game\n";
	return 0;
}
// Write Here
