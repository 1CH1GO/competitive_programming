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

const int maxn = 1e3 + 100, mod = 1e9 + 7;
ll dp[maxn][maxn];
char grid[maxn][maxn];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)cin >> grid[i][j];

    if(grid[0][0] == '*')dp[0][0] = 0;
    else dp[0][0] = 1;
    for(int i = 1; i < n; i++){
        if(grid[0][i] == '*')dp[0][i] = 0;
        else dp[0][i] = dp[0][i - 1];
        
        if(grid[i][0] == '*')dp[i][0] = 0;
        else dp[i][0] = dp[i - 1][0];
    }
    for(int i = 1; i < n; i++){
        for(int j = 1; j < n; j++){
            if(grid[i][j] == '*')dp[i][j] = 0;
            else{
                dp[i][j] += dp[i - 1][j];dp[i][j] %= mod;
                dp[i][j] += dp[i][j - 1]; dp[i][j] %= mod;
            }
        }
    }
    cout << dp[n - 1][n - 1] << '\n';
    return 0;
}
// Write Here
