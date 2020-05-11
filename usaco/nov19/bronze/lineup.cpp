// 失敗するからこそ そこから立ち向かって行く強さがあってそんな強さが本当の強さだと私は思うから
#ifdef DAIJOBU
#include "/home/v-o_o-v/deb.h"
#define deb(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#include <bits/stdc++.h>
#define deb(x...)
#endif 

using namespace std;

#define mp make_pair
#define mt make_tuple
#define fi first
#define se second
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define ford(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define fore(i, a, b) for (int i = (int)(a); i <= (int)(b); ++i)

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
 
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpi;
typedef long long lint;
typedef double ld;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	freopen("lineup.in", "r", stdin);
	freopen("lineup.out", "w", stdout);

	int n;
	cin >> n;
	vi a;
	for1(i, 8)a.pb(i);
	map<string, int> m;
	string B[10];
	B[1] = "Bessie";B[2] = "Buttercup"; B[3] = "Belinda"; B[4] = "Beatrice";
	B[5] = "Bella"; B[6] = "Blue"; B[7] = "Betsy"; B[8] = "Sue";
	
	sort(B + 1, B + 9);
	for1(i, 8){
		m[B[i]] = i;
	}
	vpi q;
	forn(i, n){
		string A[6];
		forn(j, 6)cin >> A[j];
		q.pb({m[A[0]], m[A[5]]});
	}
	do{
		int c = 0;
		for(auto i:q){
			int pos1 = find(all(a), i.fi) - a.begin();
			int pos2 = find(all(a), i.se) - a.begin();
			if(abs(pos1 - pos2) == 1)c++;
		}
		if(c  == q.size()){
			for(auto i:a){
				cout << B[i] << '\n';
			}
			return 0;
		}
	}while(next_permutation(all(a)));
	return 0;
}
// Write Here