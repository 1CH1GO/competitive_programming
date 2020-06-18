#include <bits/stdc++.h>
using namespace std;

#ifdef _DEBUG
    #include "/home/v-o_o-v/deb.h"
    #define deb(x...)cerr << "[" << #x << "] = [";_print(x);
#else
    #define deb(x...)
#endif

#define fi first
#define se second
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
using ll = long long;

const int mod = 1e9 + 7;
const int maxn = 1e5 + 100;
ll a[maxn], dp[maxn][105];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m;
    cin >> n >> m;
   
    for(int i = 0; i < n; i++)
        cin >> a[i];
    
    if(a[0])dp[0][a[0]] = 1;
    else {
        for(int i = 1; i <= m; i++)dp[0][i] = 1;
    }
    for(int i = 1; i < n; i++)
        if(a[i]){
            dp[i][a[i]] += dp[i - 1][a[i]]; dp[i][a[i]] %= mod;
            dp[i][a[i]] += dp[i - 1][a[i] - 1]; dp[i][a[i]] %= mod;
            dp[i][a[i]] += dp[i - 1][a[i] + 1]; dp[i][a[i]] %= mod;
            continue;
        }
        for(int j = 1; j <= m; j++){
            dp[i][j] += dp[i - 1][j];dp[i][j] %= mod;
            dp[i][j] += dp[i - 1][j - 1];dp[i][j] %= mod;
            dp[i][j] += dp[i - 1][j + 1];dp[i][j] %= mod;
        }
    }
    
    ll sum = 0;
    for(int i = 1; i <= m; i++){
        sum += dp[n - 1][i];
        sum %= mod;
    }
    cout << sum << '\n';
    return 0;
}
// Write Here
