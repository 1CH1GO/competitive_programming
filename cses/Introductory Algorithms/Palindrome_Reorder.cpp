// 失敗するからこそ そこから立ち向かって行く強さがあって そんな強さが本当の強さだと私は思うから
// ぜったいあきらめない
#include<bits/stdc++.h>
using namespace std;
 
#if defined(DAIJOBU)
#include "/home/pavan/debug.hpp"
#define deb(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define deb(x...)
#endif
 
const int mod = 1e9 + 7;
#define fi first
#define se second
#define FIO {ios::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);}
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define ford(i, n) for (int i = (int)(n); i > 0; --i)
 
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpi;
typedef vector<vi> vvi;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef long double ld;
 
int main(){
	FIO
	
	string s;cin >> s;
	map<char,int> cnts;
	forn(i, s.size())cnts[s[i]]++;
	if(s.size() % 2){
		int evens = 0, odds = 0;
		char odd;
		for(auto i:cnts){if(i.se%2){odds++;odd = i.fi;} else evens++;}
		deb(odds,evens);
		if(odds == 1){
			string ans;
			for(auto i:cnts){
				ans+= string(i.se / 2, i.fi);
			}
			string t = ans;
			ans += odd;
			reverse(all(t));
			ans += t;
			cout << ans;
			
		}
		else cout <<"NO SOLUTION";
	}
	else{
		int odds = 0,evens = 0;
		for(auto i:cnts){if(i.se%2){odds++;} else evens++;}
		if(odds == 0){
			string ans;
			for(auto i:cnts){
				ans+= string(i.se / 2, i.fi);
			}
			string t = ans;
			reverse(all(t));
			ans += t;
			cout << ans;
		}
		else cout << "NO SOLUTION";
	}
	return 0;
}
