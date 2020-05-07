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
int dp[MAX_N];
 
int main() {
	FIO
 
	int n;cin >> n;
	int nums[n], sum = 0;
	for(int i = 1; i <=n ;i++){cin >> nums[i]; sum += nums[i];}
	dp[0] = 1;
	set<int> pos;
	for(int i = 1; i <= n; i++){
		for(int j = sum; j >= 0; j--){
			if(dp[j]){dp[nums[i] + j] = 1;pos.insert(j);pos.insert(nums[i] + j);}
		}
	}
	pos.erase(0);
	cout << pos.size() << "\n";
	for(auto i:pos)cout << i << " ";
	cout << "\n";
	return 0;
}
