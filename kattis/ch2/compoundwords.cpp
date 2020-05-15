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

	string s;
	set<string> st;
	vector<string> v;
	while(getline(cin, s)){
		
		string word;
		s += " ";
		for(auto i:s){
			if(i == ' '){
				v.push_back(word);
				word.clear();
			}else word += i;
		}
	}
	for(int i = 0; i < (int)v.size(); i++){
		for(int j = i + 1; j < (int)v.size(); j++){
			st.insert(v[i] + v[j]);
			st.insert(v[j] + v[i]);
		}
	}
	for(auto i:st)cout << i << '\n';
	return 0;
}
// Write Here
