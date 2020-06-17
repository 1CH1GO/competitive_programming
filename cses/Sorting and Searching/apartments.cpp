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
ll a[maxn], b[maxn], n, m, k, ans;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n >> m >> k;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    
    for(int i = 0; i < m; i++)
        cin >> b[i];
    
    sort(a, a + n);
    sort(b, b + m);
    
    for(int i = 0; i < m; i++){
        int ind = lower_bound(a, a + n, b[i] - k) - a;
        if(ind == n)continue;
        if(a[ind] <= b[i] + k){
            ans++;
            a[ind] = LLONG_MIN;
        }
    }
    cout << ans << '\n';
    return 0;
}
// Write Here
