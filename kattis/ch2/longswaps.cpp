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
	int k;
	cin >> s >> k;
	if(k <= (int)s.size() / 2)cout << "Yes\n";
	else{
		string t = s;
		sort(t.begin(), t.end());
		for(int i = 0; i < (int)s.size(); i++){
			if(i - k < 0 && i + k >= (int)s.size()){
				if(t[i] != s[i]){
					cout << "No\n";
					return 0;
				}
			}
		}
		cout << "Yes\n";
		return 0;
	}
	return 0;
}
// Write Here
