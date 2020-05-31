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

	freopen("photo.in", "r", stdin);
	freopen("photo.out", "w", stdout);

	int n;
	cin >> n;
	vector<int> a(n - 1);
	for(int i = 0; i < n - 1; i++)cin >> a[i];
	for(int i = 1; i <= n; i++){
		vector<int> now;
		bool used[n + 1];
		memset(used, false, sizeof used);
		used[i] = true;
		now.push_back(i);
		for(int j = 0; j < n - 1; j++){
			now.push_back(a[j] - now.back());
		}
		set<int> s;
		for(auto el:now)if(el > 0)s.insert(el);
		if((int)s.size() == n){
			for(int j = 0; j < n; j++){
				if(j > 0)cout << ' ';
				cout << now[j];
			}
			cout << '\n';
			return 0;
		}
	}
	return 0;
}
// Write Here
