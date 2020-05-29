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
	int ans = 0;
	for(int i = 0; i < (1 << n); i++){
		vector<int> A;
		for(int j = 0; j < n; j++){
			if(i & (1 << j))A.push_back(a[j]);
		}
		if(A.size() % 2){
			if(A[A.size() / 2] == b){
				deb(A);
			}
		}
	}
	cout << ans << '\n';
	return 0;
}
// Write Here
