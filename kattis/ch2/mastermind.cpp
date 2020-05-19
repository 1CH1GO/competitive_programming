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
	string code, guess;
	cin >> code >> guess;
	string cleft, gleft;
	int r = 0, s = 0;
	for(int i = 0; i < n; i++){
		if(code[i] == guess[i])r++;
		else{
			cleft.push_back(code[i]);
			gleft.push_back(guess[i]);
		}
	}
	while(cleft.size()){
		int ind = gleft.find(cleft[0]);
		if(ind >= 0){
			s++;
			gleft.erase(gleft.begin() + ind);
		}
		cleft.erase(cleft.begin());
	}
    cout << r << " " << s << endl;
	return 0;
}
// Write Here
