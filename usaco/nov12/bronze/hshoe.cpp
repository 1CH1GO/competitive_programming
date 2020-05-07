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

int n, ans;
char grid[10][10];
bool used[10][10];
pii par[10][10];
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

bool isValid(int x, int y){
	if(x >= 0 && x < n && y >= 0 && y < n)return true;
	return false;	
}

void dfs(int x, int y){
	string now;
	for(pii i = mp(x, y); i != mp(-1, -1); i = par[i.fi][i.se]){
		now += grid[i.fi][i.se];
	}
	if(now.size() % 2 == 0){
		reverse(all(now));
		// deb(now);
		int op = 0, cl = 0;
		for(int i = 0; i < (int)now.size() / 2; i++){
			if(now[i] == '(')op++;
		}
		for(int i = now.size() / 2; i < (int)now.size(); i++){
			if(now[i] == ')')cl++;
		}
		if(op == (int)now.size() / 2 && cl == (int)now.size() / 2)ans = max(ans, (int)now.size());
	}
	used[x][y] = true;
	for(int i = 0; i < 4; i++){
		int tx = x + dx[i];
		int ty = y + dy[i];
		if(isValid(tx, ty) && !used[tx][ty]){
			par[tx][ty] = {x, y};
			dfs(tx, ty);
		}
	}
	used[x][y] = 0;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	freopen("hshoe.in", "r", stdin);
	freopen("hshoe.out","w",stdout);

	cin >> n;
	forn(i, n){
		forn(j, n)cin >> grid[i][j];
	}
	par[0][0] = {-1, -1};
	dfs(0, 0);
	cout << ans;
	return 0;
}
// Write Here
