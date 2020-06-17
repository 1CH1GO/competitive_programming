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

const int maxn = 2e5 + 100;
ll p[maxn];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> p[i];
    
    sort(p, p + n);
    ll median = p[n / 2], ans = 0;
    for(int i = 0; i < n; i++){
        ans += abs(p[i] - median);
    }
    cout << ans << '\n';
    return 0;
}
// Write Here
