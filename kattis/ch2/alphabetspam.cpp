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
	long double ws = 0, lc = 0, uc = 0, sy = 0, n = s.size();
	for(auto ch: s){
		if(ch == '_')ws++;
		else if(islower(ch))lc++;
		else if(isupper(ch))uc++;
		else sy++;
	}
	cout << fixed << setprecision(16);
	cout << ws / n << '\n' << lc / n << '\n' << uc / n << '\n' << sy / n << '\n';
	return 0;
}
// Write Here
