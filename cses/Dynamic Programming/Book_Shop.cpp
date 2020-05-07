//失敗するからこそそこから立ち向かって行く強さがあってそんな強さが本当の強さだと私は思うから
// ぜったいあきらめない
#include<bits/stdc++.h>
using namespace std;
 
#if defined(DAIJOBU)
#include "/home/pavan/prettyprint.hpp"
#define deb(x...) cerr << "[" << #x << "] = " << x;
#else
#define deb(x...)
#endif
#define FIO {ios::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);}
 
const int MOD = 1e9 + 7;
const int MAX_N = 1e6 + 5;
const long long INF = 1e12;
int dp[1500][100005];
 
int heights[MAX_N], weights[MAX_N];
int main() {
	FIO
 
	int n, x;cin >> n >> x;
	for(int i = 1; i <= n;i++)cin >> heights[i];
	for(int i = 1; i <= n;i++)cin >> weights[i];
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= x;j++){
			dp[i][j] = max(dp[i][j], dp[i - 1][j]);
			if(j - heights[i] >= 0){
				dp[i][j] = max(dp[i][j] , dp[i - 1][j - heights[i]] + weights[i]);
			}
		}
	}
	cout << dp[n][x];
	return 0;
}
