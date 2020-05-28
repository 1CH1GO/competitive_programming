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

	string n, m;
	cin >> n >> m;
	int ms = m.size(), ns = n.size();
	reverse(n.begin(), n.end());
	if(ms == 1){
		cout << n << '\n';
		return 0;
	}
	if(ms < ns){
		string ans;
		for(int i = 0; i < ms - 1; i++)ans += n[i];
		string left;
		for(int i = ms - 1; i < ns; i++)left += n[i];
		bool ok = true;
		// deb(ans);
		for(auto ch: ans)ok &= (ch == '0');
		if(!ok){
			left = ans + "." + left;
			for(auto& ch: left){
				if(ch != '0')break;
				ch = '\0';
			}
		}
		reverse(left.begin(), left.end());
		cout << left << '\n';
	}else{
		// string ans;
		while(n.size() != (m.size() - 1))n += "0";
		n += ".0";
		for(auto& ch: n){
			if(ch != '0')break;
			ch = '\0';
		}
		reverse(n.begin(), n.end());
		cout << n << '\n';
	}
	return 0;
}
// Write Here
