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
	while(t--){
		stack<char> st;
		string s;
		cin >> s;
		bool ok = true;
		for(auto i:s){
			if(i == '.')continue;
			else if(i == '$' || i == '|' || i == '*')st.push(i);
			else if(i == 't'){
				if(!st.empty() && st.top() == '|')st.pop();
				else ok = false;
			}
			else if(i == 'b'){
				if(!st.empty() && st.top() == '$')st.pop();
				else ok = false;
			}
			else if(i == 'j'){
				if(!st.empty() && st.top() == '*')st.pop();
				else ok = false;
			}
		}
		if((int)st.size() == 0 && ok)puts("YES");
		else puts("NO");
	}
	return 0;
}
// Write Here
