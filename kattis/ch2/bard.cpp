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

	int n, m;
	cin >> n >> m;
	vector<set<int>> songs(n + 11);
	int scnt = 1;
	for(int i = 0; i < m; i++){
		int k;
		cin >> k;
		vector<int> a(k);
		bool ok = false;
		for(int j = 0; j < k; j++){
			cin >> a[j];
			if(a[j] == 1)ok = true;
		}
		if(ok){
			for(int j = 0; j < k; j++){
				songs[a[j]].insert(scnt);
			}
			scnt++;
		}else{
			for(int j = 0; j < k; j++){
				for(int l = 0; l < k; l++){
					for(auto el:songs[a[l]])songs[a[j]].insert(el);
				}
			}
		}
	}
	for(int i = 1; i <= n; i++){
		if(songs[i].size() == songs[1].size())cout << i << '\n';
	}
	return 0;
}
// Write Here
