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

	vector<int> a(5);
	for(int i = 0; i < 5; i++)cin >> a[i];
	while(!is_sorted(a.begin(), a.end())){
		if(a[0] > a[1]){
			swap(a[0], a[1]);
			for(auto i:a)cout << i << ' ';
			cout << '\n';
		}
		if(a[1] > a[2]){
			swap(a[1], a[2]);
			for(auto i:a)cout << i << ' ';
			cout << '\n';
		}
		if(a[2] > a[3]){
			swap(a[2], a[3]);
			for(auto i:a)cout << i << ' ';
			cout << '\n';
		}
		if(a[3] > a[4]){
			swap(a[3], a[4]);
			for(auto i:a)cout << i << ' ';
			cout << '\n';
		}
	}
	return 0;
}
// Write Here
