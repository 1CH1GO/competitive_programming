// 失敗するからこそ そこから立ち向かって行く強さがあってそんな強さが本当の強さだと私は思うから
#ifdef DAIJOBU
#include "/home/v-o_o-v/deb.h"
#define deb(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#include <bits/stdc++.h>
#define deb(x...)
#endif 

using namespace std;

const int maxn = 1e5 + 100;
bool used[maxn];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> n >> m;
	int a[m];
	for(int i = 0; i < m; i++)cin >> a[i], used[a[i]] = 1;
	for(int i = 0; i < m; i++){
		if(i == 0){
			for(int j = 1; j < a[0]; j++){
				if(!used[j]){
					used[j] = 1;
					cout << j << '\n';
				}
			}
		}else{
			for(int j = a[i - 1]; j < a[i]; j++){
				if(!used[j]){
					used[j] = 1;
					cout << j << '\n';
				}
			}
		}
		cout << a[i] << '\n';
	}
	for(int i = 1; i <= n; i++)if(!used[i])cout << i << '\n';
	return 0;
}
// Write Here
