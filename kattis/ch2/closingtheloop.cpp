// 失敗するからこそ そこから立ち向かって行く強さがあってそんな強さが本当の強さだと私は思うから
#ifdef DAIJOBU
#include "/home/v-o_o-v/deb.h"
#define deb(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#include <bits/stdc++.h>
#define deb(x...)
#endif 
#define all(x) (x).begin(), (x).end()
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	int cas = 1;
	while(t--){
		int n;
		cin >> n;
		vector<int> B, R;
		for(int i = 0; i < n; i++){
			string s;
			cin >> s;
			if(s[s.size() - 1] == 'B')B.push_back(stoi(s.substr(0, s.size() - 1)));
			else R.push_back(stoi(s.substr(0, s.size() - 1)));
		}
		sort(all(B));reverse(all(B));
		sort(all(R));reverse(all(R));
		int x = min(B.size(), R.size());
		int sum = 0;
		for(int i = 0; i < x; i++)sum += B[i];
		for(int i = 0; i < x; i++)sum += R[i];
		sum -= x * 2;
		cout << "Case #" << cas++ << ": " << sum << '\n';
	}
	return 0;
}
// Write Here
