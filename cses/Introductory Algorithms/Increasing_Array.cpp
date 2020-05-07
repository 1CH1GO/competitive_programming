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
	
	int n;cin >> n;
	vi a(n);forn(i, n)cin >> a[i];
	ll ans = 0;
	for1(i, n - 1){
		if(a[i] < a[i - 1]){ans += a[i - 1] - a[i];a[i] = a[i - 1];}
		//deb(a);
	}
	cout << ans;
	return 0;
}
