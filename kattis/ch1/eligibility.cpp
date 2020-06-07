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

	int q;
	cin >> q;
	while(q--){
		string name, Y1, Y2;
		int courses;
		cin >> name >> Y1 >> Y2 >> courses;
		if(stoi(Y1.substr(0,4)) >= 2010){
			//yes
			cout << name << " eligible\n";
		}else if(stoi(Y2.substr(0,4)) >= 1991){
			//yes
			cout << name << " eligible\n";
		}else if(courses >= 41){
			// no
			cout << name << " ineligible\n";
		}else{
			//petition
			cout << name << " coach petitions\n";
		}
	}
	return 0;
}
// Write Here
