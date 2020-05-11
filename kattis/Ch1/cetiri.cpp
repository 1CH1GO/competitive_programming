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

	int a[3];
	for(int i = 0; i < 3; i++)cin >> a[i];
	sort(a, a + 3);
	int diff1 = a[1] - a[0];
	int diff2 = a[2] - a[1];
	if(diff1 > diff2){
		cout << a[0] + diff2 << '\n';
	}else if(diff1 < diff2){
		cout << a[1] + diff1 << '\n';
	}else {
		cout << a[2] + diff1 << '\n';
	}
	return 0;
}
// Write Here
