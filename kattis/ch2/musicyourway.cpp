// 失敗するからこそ そこから立ち向かって行く強さがあってそんな強さが本当の強さだと私は思うから
#ifdef DAIJOBU
#include "/home/v-o_o-v/deb.h"
#define deb(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#include <bits/stdc++.h>
#define deb(x...)
#endif 

using namespace std;

vector<string> tokenize(string s){
	vector<string> ret;
	s += " ";
	string t;
	for(auto ch : s){
		if(ch == ' ')ret.push_back(t), t.clear();
		else t += ch;
	}
	return ret;
}

bool comp(vector<string> a, vector<string> b, int ind){
	return a[ind] < b[ind];
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	getline(cin, s);
	map<string, int> ind;
	vector<string> v = tokenize(s);
	for(int i = 0; i < (int)v.size(); i++)ind[v[i]] = i;
	int q;
	cin >> q;
	cin.ignore();
	vector<vector<string>> data;
	data.resize(q);
	for(int i = 0; i < q; i++){
		getline(cin, s);
		vector<string> z = tokenize(s);
		for(auto str:z)data[i].push_back(str);
	}
	cin >> q;
	cin.ignore();
	for(int i = 0; i < q; i++){
		getline(cin, s);
		stable_sort(data.begin(), data.end(), [&](vector<string> a, vector<string> b){ return a[ind[s]] < b[ind[s]]; });
		for(auto str: v)cout << str << ' ';
		cout << '\n';
		for(auto vec: data){
			for(auto str: vec)cout << str << ' ';
			cout << '\n';
		}
		cout << '\n';
	}
	return 0;
}
// Write Here
