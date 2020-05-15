// 失敗するからこそ そこから立ち向かって行く強さがあってそんな強さが本当の強さだと私は思うから
#ifdef DAIJOBU
#include "/home/v-o_o-v/deb.h"
#define deb(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#include <bits/stdc++.h>
#define deb(x...)
#endif 

using namespace std;

char mat[40][40];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	memset(mat, '#', sizeof mat);
	int r, c;
	cin >> r >> c;
	for(int i = 1; i <= r; i++){
		for(int j = 1; j <= c; j++){
			cin >> mat[i][j];
		}
	}
	set<string> words;
	// horizontal 
	string word;
	for(int i = 1; i <= r; i++){
		for(int j = 1; j <= c + 1; j++){
			if(mat[i][j] == '#'){
				if((int)word.size() >= 2)words.insert(word);
				word.clear();
			}else word += mat[i][j];
		}
	}
	// vertical
	for(int i = 1; i <= c; i++){
		for(int j = 1; j <= r + 1; j++){
			if(mat[j][i] == '#'){
				if((int)word.size() >= 2)words.insert(word);
				word.clear();
			}else word += mat[j][i];
		}
	}
	cout << *words.begin();
	return 0;
}
// Write Here
