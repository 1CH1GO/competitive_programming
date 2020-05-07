//失敗するからこそそこから立ち向かって行く強さがあってそんな強さが本当の強さだと私は思うから
// ぜったいあきらめない
#include<bits/stdc++.h>
using namespace std;
 
#if defined(DAIJOBU)
#include "/home/pavan/debug.hpp"
#define deb(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define deb(x...)
#endif
#define FIO {ios::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);}
 
const long long inf = 1e18;
const int MAX_N = 1e6+ 100;
 
long long f(long long i){
	return (long long)i * (i + 1) / 2;
}
bool used[MAX_N];
int main() {
	FIO
 
	long long n;cin >> n;
	vector<int> group[2];
	long long halfsum = f(n) / 2;
	int x = n;
	deb(halfsum);
	while(halfsum){
		if(halfsum < x){
			used[halfsum] = true;
			group[0].emplace_back(halfsum);
			break;
		}
		halfsum -= x;
		group[0].emplace_back(x);
		used[x] = true;
		x--;
	}
	long long rem_sum = 0;
	for(int i = 1; i <= n; i++){
		if(!used[i]){
			rem_sum += i;
			group[1].emplace_back(i);
		}
	}
	if(rem_sum == f(n) / 2){
		cout << "YES\n" << group[0].size() << "\n";
		for(auto i:group[0])cout << i << " ";
		cout << "\n" << group[1].size() << "\n";
		for(auto i:group[1])cout << i << " ";
	}
	else cout << "NO";
		
	return 0;
}
