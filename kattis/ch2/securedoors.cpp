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
	set<string> st;
	while(q--){
		string s, t;
		cin >> s >> t;
		if(s == "entry"){
			if(st.find(t) != st.end()){
				cout << t << " entered (ANOMALY)\n";
				
			}else {
				cout << t << " entered\n";
				st.insert(t);
			}
		}else{
			if(st.find(t) == st.end()){
				cout << t << " exited (ANOMALY)\n";
				
			}else {
				cout << t << " exited\n";
				st.erase(t);
			}
		}
	}
	return 0;
}
// Write Here
