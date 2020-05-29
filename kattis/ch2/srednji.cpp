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

	int n, b;
	cin >> n >> b;
	vector<int> a(n);
	for(int i = 0; i < n; i++)cin >> a[i];
	int x = distance( a.begin(), find( a.begin(), a.end(), b ) );
	int delta = 0, ans = 0;
	map<int, int> cnt1, cnt2;
	for(int i = x; i >= 0; i--){
		if(a[i] < a[x])delta--;
		else if(a[i] > a[x])delta++;
		cnt1[delta]++;
	}
	delta = 0;
	for(int i = x; i < n; i++){
		if(a[i] < a[x])delta--;
		else if(a[i] > a[x])delta++;
		cnt2[delta]++;
	}
	for(int i = -n; i <= n; i++){
		ans += cnt1[i] * cnt2[-i];
	}
	cout << ans << '\n';
	return 0;
}
// Write Here


