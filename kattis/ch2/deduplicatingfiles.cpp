// 失敗するからこそ そこから立ち向かって行く強さがあってそんな強さが本当の強さだと私は思うから
#ifdef DAIJOBU
#include "/home/v-o_o-v/deb.h"
#define deb(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#include <bits/stdc++.h>
#define deb(x...)
#endif 

using namespace std;

int f(string s){
	int ret = 0;
	for(auto ch: s){
		ret ^= (int)ch;
	}
	return ret;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	while(true){
		cin >> n;
		cin.ignore();
		if(n == 0)break;
		string s;
		vector<string> v(n);
		vector<int> hash(n);
		map<string, int> m;
		for(int i = 0; i < n; i++){
			getline(cin, s);
			v[i] = s;
			hash[i] = f(s);
			m[s]++;
		}
		int uniq = n, coll = 0;
		for(int i = 0; i < n; i++){
			for(int j = i + 1; j < n; j++){
				if(hash[i] == hash[j]){
					if(v[i] != v[j])coll++;
				}
			}
		}
		cout << uniq << ' ' << coll << '\n';
	}
	return 0;
}
// Write Here
