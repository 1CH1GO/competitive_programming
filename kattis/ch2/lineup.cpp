// 失敗するからこそ そこから立ち向かって行く強さがあってそんな強さが本当の強さだと私は思うから
#ifdef DAIJOBU
#include "/home/v-o_o-v/deb.h"
#define deb(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#include <bits/stdc++.h>
#define deb(x...)
#endif 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
using namespace std;


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	vector<string> v(n);
	for(int i = 0; i < n; i++)cin >> v[i];
	if(is_sorted(all(v)))cout << "INCREASING\n";
	else if(is_sorted(rall(v)))cout << "DECREASING\n";
	else cout << "NEITHER";
	return 0;
}
// Write Here
