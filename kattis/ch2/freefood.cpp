// 失敗するからこそ そこから立ち向かって行く強さがあってそんな強さが本当の強さだと私は思うから
#ifdef DAIJOBU
#include "/home/v-o_o-v/deb.h"
#define deb(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#include <bits/stdc++.h>
#define deb(x...)
#endif 

using namespace std;
int A[500];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		int s, t;
		cin >> s >> t;
		A[s]++;
		A[t + 1]--;
	}
	for(int i = 1; i < 500; i++)A[i] += A[i - 1];
	int ans = 0;
	for(int i = 0; i < 500; i++){
		if(A[i] >= 1)ans++;
	}
	cout << ans << '\n';
	return 0;
}
// Write Here
