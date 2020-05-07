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
 
const int MAX_N = 1e6 + 5;
const long long INF = 1e12;
long long dp[MAX_N];
int main() {
	FIO
 
	int n, target;cin >> n >> target;
	vector<int> coins(n);
	for(auto& i:coins)cin >> i;
	dp[0] = 0;
	for(int i = 1; i <= target ;i++){
		dp[i] = INF;
		for(auto j:coins){
			if(i - j >= 0){
				dp[i] = min(dp[i] , dp[i - j] + 1);
			}
		}
	}
	if(dp[target] == INF)cout << -1;
	else cout << dp[target];
	return 0;
}
