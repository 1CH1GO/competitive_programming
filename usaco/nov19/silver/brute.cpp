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

#define N 10000000
int dp[N+1];
int32_t main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
//   cc();
//   memset(dp,0,sizeof(dp));
  int M = 1e9 + 7;
  dp[0]=1;
  int k,n;
  cin>>k>>n;
  int c[k];
  forn(i,k)
  {
      cin>>c[i];
  }
  for1(i,n)
  {
      forn(j,k)
      {
              if(c[j]<=i)
          {
              dp[i] += dp[i - c[j]];
			  dp[i] %= M;
          }
      }
  }
  cout<<dp[n]%M<<endl;
}
