// 失敗するからこそ そこから立ち向かって行く強さがあって そんな強さが本当の強さだと私は思うから
// ぜったいあきらめない

// https://math.stackexchange.com/questions/3266257/number-of-ways-two-knights-can-be-placed-such-that-they-dont-attack

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
 
ll f(ll n){
	return n * (n - 1) / 2;
}
ll ans(ll n){
	ll res = f((ll)(n * n)) - 4 *(n - 1) * (n - 2);
	return res;
}
int main(){
	FIO
	
	ll n;cin >> n;
	deb(ans(n));
	for1(i, n){
		cout << ans(i) << "\n";
	}
	return 0;
}
