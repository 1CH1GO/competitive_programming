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
int n, m;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n >> m;
    multiset<int> ms;
    for(int i = 0; i < n; i++){
        int h;
        cin >> h;
        ms.insert(h);
    }

    for(int i = 0; i < m; i++){
        int t;
        cin >> t;
        auto it = ms.upper_bound(t);
        if(it == ms.begin()){
            cout << -1 << '\n';
        }else{
            it--;
            cout << *it << '\n';
            ms.erase(ms.find(*it));
        }
    }
    return 0;
}
// Write Here
