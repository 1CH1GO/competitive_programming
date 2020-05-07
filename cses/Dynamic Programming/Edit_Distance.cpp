//失敗するからこそそこから立ち向かって行く強さがあってそんな強さが本当の強さだと私は思うから
// ぜったいあきらめない
#include<bits/stdc++.h>
using namespace std;
 
#if defined(DAIJOBU)
#include "/home/pavan/prettyprint.hpp"
#define deb(x...) cerr << "[" << #x << "] = " << x << "\n";
#else
#define deb(x...)
#endif
#define FIO {ios::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);}
 
const int MOD = 1e9 + 7;
const int MAX_N = 1e6 + 5;
const long long INF = 1e12;
int dp[5500][5500];
int n, p;
 
int main() {
	FIO
 
	string s, t;cin >> s >> t;
	for(int i = 0; i <= s.size();i++)dp[0][i] = i;
	for(int i = 0; i <= t.size();i++)dp[i][0] = i;
	for(int i = 1; i <= t.size();i++){
		for(int j = 1; j <= s.size();j++){
			if(t[i - 1] == s[j - 1]){
				dp[i][j] = dp[i - 1][j - 1];
			}
			else{
				dp[i][j] = min(dp[i - 1][j], min(dp[i][j - 1], dp[i - 1][j - 1])) + 1;
			}
		}
	}
	cout << dp[t.size()][s.size()];
	return 0;
}
