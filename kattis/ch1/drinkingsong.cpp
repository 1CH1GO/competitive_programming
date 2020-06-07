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
	string s;
	cin >> n >> s;
	while(n){
		if(n == 1){
			cout << n << " bottle of " << s << " on the wall, " << n << " bottle of " << s << ".\n";
			cout << "Take it down, pass it around, no more bottles of " << s << ".\n";
			cout << '\n';
		}else if(n == 2){
			cout << n << " bottles of " << s << " on the wall, " << n << " bottles of " << s << ".\n";
			cout << "Take one down, pass it around, " << n - 1 << " bottle of " << s << " on the wall.\n";
			cout << '\n';
		}else{
			cout << n << " bottles of " << s << " on the wall, " << n << " bottles of " << s << ".\n";
			cout << "Take one down, pass it around, " << n - 1 << " bottles of " << s << " on the wall.\n";
			cout << '\n';
		}
		n--;
	}
	return 0;
}
// Write Here

