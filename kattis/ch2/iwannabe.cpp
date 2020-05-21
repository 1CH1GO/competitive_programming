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

	int n, k;
	cin >> n >> k;
	vector<pair<long long, int>> a(n), d(n), h(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i].first >> d[i].first >> h[i].first;
		a[i].second = d[i].second = h[i].second = i;
	}
	sort(a.rbegin(), a.rend());
	sort(d.rbegin(), d.rend());
	sort(h.rbegin(), h.rend());
	set<int> team;
	for (int i = 0; i < k; i++) {
		team.insert(a[i].second);
		team.insert(d[i].second);
		team.insert(h[i].second);
	}
	cout << team.size() << endl;
	return 0;
}
// Write Here
