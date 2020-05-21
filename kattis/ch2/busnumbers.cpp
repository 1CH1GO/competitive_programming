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
	cin >> n;
	int a[n + 1];
	for(int i = 0; i < n; i++)cin >> a[i];
	sort(a, a + n);
	vector<int> v;
	a[n] = 2000;
	v.push_back(a[0]);
	for(int i = 1; i <= n; i++){
		if(a[i] - v.back() > 1){
			if((int)v.size() >= 3){
				cout << v[0] << '-' << v[v.size() - 1] << ' ';
			}else{
				for(auto num: v)cout << num << ' ';
			}
			v.clear();
			v.push_back(a[i]);
		}else v.push_back(a[i]);
	}
	return 0;
}
// Write Here
