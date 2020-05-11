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
	while(n--){
		string s;
		cin >> s;
		if(s == "P=NP")cout << "skipped\n";
		else{
			int ind = find(s.begin(), s.end(), '+') - s.begin();
			string first = s.substr(0, ind);
			string sec = s.substr(ind + 1);
			cout << stoi(first) + stoi(sec) << '\n';
		}
	}
	return 0;
}
// Write Here
