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
long long dp[MAX_N];
 
int main() {
	FIO
 
	int target;cin >> target;
	dp[0] = 1;
	for(int i = 1; i <= target; i++){
		for(int j = 1; j <= 6;j++){
			if(i - j >= 0){
				dp[i] += dp[i - j];
				dp[i] %= MOD;
			}
		}
	}
	cout << dp[target];
	return 0;
}
