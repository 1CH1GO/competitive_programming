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

	int a, b;
	cin >> a >> b;
	if(a > b){
		if(a - b > 1)
			cout << "Dr. Chaz needs " << a - b << " more pieces of chicken!\n";
		else 
			cout << "Dr. Chaz needs " << a - b << " more piece of chicken!\n";
	}else {
		if(b - a > 1)
			cout << "Dr. Chaz will have " << b - a << " pieces of chicken left over!";
		else
			cout << "Dr. Chaz will have " << b - a << " piece of chicken left over!";
	}
	return 0;
}
// Write Here
