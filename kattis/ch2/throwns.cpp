// 失敗するからこそ そこから立ち向かって行く強さがあってそんな強さが本当の強さだと私は思うから
#ifdef DAIJOBU
#include "/home/v-o_o-v/deb.h"
#define deb(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#include <bits/stdc++.h>
#define deb(x...)
#endif 

using namespace std;

vector<string> tokens(string s){
	s += " ";
	string t;
	vector<string> ret;
	for(auto ch: s){
		if(ch == ' '){
			ret.push_back(t);
			t.clear();
		}else t += ch;
	}
	return ret;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, k;
	cin >> n >> k;
	cin.ignore();
	string s;
	getline(cin, s);
	vector<string> v = tokens(s);
	stack<int> st;
	int in = 0;
	while(in < (int)v.size()){
		if(v[in] == "undo"){
			int z = stoi(v[in + 1]);
			while(z--)st.pop();
			in += 2;
		}else{
			st.push(stoi(v[in]));
			in++;
		}
	}
	int N = 0;
	while(!st.empty()){
		int z = st.top();
		st.pop();
		while(z < 0)z += n;
		z %= n;
		N = (N + z) % n;
	}
	cout << N;
	return 0;
}
// Write Here
