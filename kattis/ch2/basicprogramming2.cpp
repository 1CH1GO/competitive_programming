// 失敗するからこそ そこから立ち向かって行く強さがあってそんな強さが本当の強さだと私は思うから
#ifdef DAIJOBU
#include "/home/v-o_o-v/deb.h"
#define deb(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#include <bits/stdc++.h>
#define deb(x...)
#endif 

using namespace std;

#define Sort(a) sort(a.begin(),a.end())

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, t;
	cin >> n >> t;
	vector<int> a(n);
	for(int i = 0; i < n; i++)cin >> a[i];
	if(t == 1){
		Sort(a);
		for(int i = 0; i < n; i++){
			if(binary_search(a.begin(), a.end(), 7777 - a[i])){
				cout << "Yes\n";
				return 0;
			}
		}
		cout << "No\n";
	}else if(t == 2){
		set<int> s;
		for(auto el: a)s.insert(el);
		if(s.size() == a.size())cout << "Unique\n";
		else cout << "Contains duplicate\n";
	}else if(t == 3){
		map<int, int> cnt;
		for(auto el: a)cnt[el]++;
		for(auto i: cnt)if(i.second > n / 2){cout << i.first << '\n';return 0;}
		cout << "-1\n";
	}else if(t == 4){
		Sort(a);
		if(n % 2)cout << a[n / 2] << '\n';
		else{
			cout << a[n / 2 - 1] << ' ' << a[n / 2] << '\n';
		}
	}else{
		vector<int> nums;
		for(auto el: a)if(el >= 100 && el <= 999)nums.push_back(el);
		Sort(nums);
		for(auto el: nums)cout << el << ' ';
		cout << '\n';
	}
	return 0;
}
// Write Here
