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

const int maxn = 2e5 + 100;
int p[maxn], n, x;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n >> x;
    multiset<int> ms;
    for(int i = 0; i < n; i++){
        cin >> p[i];
        ms.insert(p[i]);
    }
    sort(p, p + n);
    // deb(ms);
    int ans = 0;
    for(int i = 0; i < n; i++){
        // deb(ms);
        if(ms.find(p[i]) != ms.end()){
            ans++;
            ms.erase(ms.find(p[i]));
            if(ms.size()){
                auto it = ms.upper_bound(x - p[i]);
                if(it == ms.begin())continue;
                it--;
                if(*it + p[i] <= x)
                    ms.erase(ms.find(*it));
            }
        }
    }
    // deb(ms);
    cout << ans << '\n';
    return 0;
}
// Write Here
