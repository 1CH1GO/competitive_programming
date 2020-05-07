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
 
ll weights[50];int n;
ll ans = LLONG_MAX;
void rec(ll w1,ll w2,int c){
	if(c == n){
		ans = min(ans , abs(w1 - w2));
		return ;
	}
	else{
		rec(w1 + weights[c], w2, c + 1);
		rec(w1, w2 + weights[c], c + 1);
	}
}
int main(){
	FIO
	
	cin >> n;
	forn(i, n)cin >> weights[i];
	rec(0 , 0 , 0);
	cout << ans;
	return 0;
}
