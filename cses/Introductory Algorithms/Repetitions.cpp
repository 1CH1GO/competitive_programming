// 失敗するからこそ そこから立ち向かって行く強さがあって そんな強さが本当の強さだと私は思うから
// ぜったいあきらめない
#include<bits/stdc++.h>
using namespace std;
 
#if defined(ONLINE_JUDGE)
#include "/home/pavan/debug.hpp"
#define deb(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define deb(x...)
#endif
 
#define fi first
#define se second
#define FIO {ios::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);}
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define ford(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
 
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpi;
typedef vector<vi> vvi;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef long double ld;
 
vector<pair<char,int>> split(string s){
	vector<pair<char,int>> res;
	char c = s[0];int cnt = 0;
	forn(i, s.size() + 1){
		if(s[i] == c)cnt++;
		else{
			res.pb({c,cnt});
			c = s[i];
			cnt = 1;
			
		}
	}
	return res;
}
 
int main(){
	FIO
	
	string s;cin >> s;
	vector<pair<char,int>> splits = split(s);
	int ans = 0;
	deb(splits);
	for(auto i:splits)ans = max(ans, i.se);
	cout << ans;
	return 0;
}
