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

	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		vector<string> v;
		getline(cin, s);
		string z;
		s += " ";
		for(int i = 0; i < (int)s.size(); i++){
			if(s[i] == ' ')v.push_back(z), z.clear();
			else z += s[i];
		}
		while(getline(cin, s)){
			if(s == "what does the fox say?"){
				for(auto str: v){
					if(str.size())cout << str << ' ';
				}
				cout << '\n';
				break;
			}else{
				vector<string> a;
				s += " ";
				z = "";
				for(int i = 0; i < (int)s.size(); i++){
					if(s[i] == ' ')a.push_back(z), z.clear();
					else z += s[i];
				}
				// deb(a);
				for(int i = 0; i < (int)v.size(); i++){
					if(v[i] == a[2])v[i].clear();
				}
			}
		}
	}
	return 0;
}
// Write Here
