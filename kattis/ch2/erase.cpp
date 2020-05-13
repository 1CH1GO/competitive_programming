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
	string s, t;
	cin >> n >> s >> t;
	n = n % 2;
	for(int j = 0; j < n; j++)for(int i = 0; i < (int)s.size(); i++)s[i] = '1' - s[i] + '0';
	// deb(s);
	if(s == t)cout << "Deletion succeeded\n";
	else cout << "Deletion failed\n";
	return 0;
}
// Write Here
