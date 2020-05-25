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
	while(cin >> n){
		if(n == 0)break;
		string bstring(32, '?');
		for(int i = 0; i < n; i++){
			string op;
			cin >> op;
			if(op == "CLEAR"){
				int ind;
				cin >> ind;
				ind = 31 - ind;
				bstring[ind] = '0';
			}else if(op == "SET"){
				int ind;
				cin >> ind;
				ind = 31 - ind;
				bstring[ind] = '1';
			}else if(op == "OR"){
				int ind1, ind2;
				cin >> ind1 >> ind2;
				ind1 = 31 - ind1;
				ind2 = 31 - ind2;
				if(bstring[ind1] == '1' || bstring[ind2] == '1')bstring[ind1] = '1';
				else if(bstring[ind1] == '0' && bstring[ind2] == '0')bstring[ind1] = '0';
				else bstring[ind1] = '?';
			}else{
				int ind1, ind2;
				cin >> ind1 >> ind2;
				ind1 = 31 - ind1;
				ind2 = 31 - ind2;
				if(bstring[ind1] == '0' || bstring[ind2] == '0')bstring[ind1] = '0';
				else if(bstring[ind1] == '1' && bstring[ind2] == '1')bstring[ind1] = '1';
				else bstring[ind1] = '?';
			}
			// deb(bstring);
		}
		cout << bstring << '\n';
	}
	return 0;
}
// Write Here
