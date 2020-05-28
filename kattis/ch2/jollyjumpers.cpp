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
	while(cin >> n){
		vector<int> a(n);
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		bool used[n + 1];
		memset(used, false, sizeof used);
		for(int i = 0; i < n - 1; i++)used[abs(a[i + 1] - a[i])] = 1;
		bool ok = true;
		for(int i = 1; i < n; i++)ok &= used[i];
		if(ok)puts("Jolly");
		else puts("Not Jolly");
	}
	return 0;
}
// Write Here
