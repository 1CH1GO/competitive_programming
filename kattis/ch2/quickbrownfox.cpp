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

	int t;
	cin >> t;
	string s;
	getline(cin, s); // waste
	while(t--){
		getline(cin, s);
		map<char, int> m;
		for(auto i:s)m[tolower(i)]++;
		string miss;
		for(char i = 'a'; i <= 'z'; i++){
			if(m[i] == 0)miss += i;
		}
		if(miss.size())cout << "missing " << miss << '\n';
		else cout << "pangram\n";
	}
	return 0;
}
// Write Here
