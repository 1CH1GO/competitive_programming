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

const int maxn = 1e3 + 100;
int a[maxn], n, targ;
vector<pair<int, pair<int, int>>> sums;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> targ;
    for(int i = 0; i < n; i++)
        cin >> a[i];

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            sums.pb({a[i] + a[j], {i, j}});
        }
    }
    sort(all(sums));
    // deb(sums);
    int z = sums.size();
    vector<int> ans;
    for(int i = 0; i < z; i++){
        int l = 0, r = z;
        bool found = false;
        while(l <= r){
            int mid = (l + r) / 2;
            if(sums[mid].fi + sums[i].fi == targ){
                // puts("ok");
                vector<int> v;
                v.pb(sums[mid].se.fi);
                v.pb(sums[mid].se.se);
                if(find(all(v), sums[i].se.fi) == v.end() && find(all(v), sums[i].se.se) == v.end()){
                    v.pb(sums[i].se.fi);
                    v.pb(sums[i].se.se);
                    ans = v;
                    found = true;
                    break;
                }
                l = mid + 1;
            }else if(sums[mid].fi + sums[i].fi > targ)r = mid - 1;
            else l = mid + 1;
        }
        if(found)break;
    }
    if((int)ans.size() == 4)
        for(auto in: ans)cout << in + 1 << ' ';
    else puts("IMPOSSIBLE");
    return 0;
}
// Write Here
