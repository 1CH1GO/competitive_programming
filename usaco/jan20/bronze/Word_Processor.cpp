// 失敗するからこそ そこから立ち向かって行く強さがあってそんな強さが本当の強さだと私は思うから
#ifdef DAIJOBU
#include "/home/v-o_o-v/deb.h"
#define deb(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#include <bits/stdc++.h>
#define deb(x...)
#endif 

using namespace std;

vector<string> token(string s){
	s += " ";
	string t;
	vector<string> ret;
	for(auto ch: s){
		if(ch == ' ')ret.push_back(t), t.clear();
		else t += ch;
	}
	return ret;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	freopen("word.in", "r", stdin);
	freopen("word.out", "w", stdout);

	int n, k;
	cin >> n >> k;
	cin.ignore();
	string s;
	getline(cin, s);
	vector<string> v = token(s);
	int i = 0, sum = 0;
	while(i < (int)v.size()){
		if(sum + (int)v[i].size() > k){
			sum = 0;
			cout << '\n';
		}
		if(sum > 0)cout << ' ';
		cout << v[i];
		sum += v[i].size();
		i++;
	}
	cout << '\n';
	return 0;
}
// Write Here
