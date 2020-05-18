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
	string s;
	getline(cin, s);
	while(t--){
		map<char, int> cnts;
		getline(cin, s);
		string f;
		getline(cin, f);
		cout << s << '\n' << f << '\n';
		string num;
		for(auto i: f){if(i == ' ')break;else num += i;}
		int A = stoi(num);
		while(A){
			string op;
			getline(cin, op);
			if(op[0] == '+'){
				op += " ";
				vector<int> v;
				num.clear();
				for(int i = 2; i < (int)op.size(); i++){
					if(op[i] == ' '){
						v.push_back(stoi(num));
						num.clear();
					}else num += op[i];
				}
				for(int i = v[0]; i <= v[1]; i += v[2]){
					A--;
					int z = i;
					while(z)cnts[z % 10 + '0']++, z /= 10;
				}
			}else {
				for(auto ch: op)cnts[ch]++;
				A--;
			}
			// deb(A);
		}
		int total = 0;
		for(char i = '0'; i <= '9'; i++){
			cout << "Make " << cnts[i] << " digit " << i << '\n';
			total += cnts[i];
		}
		if(total == 1)cout << "In total " << total << " digit\n";
		else cout << "In total " << total << " digits\n";
	}
	return 0;
}
// Write Here
