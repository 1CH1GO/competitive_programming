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

const int maxn = 5000 + 100;
int a[maxn];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, targ;
    cin >> n >> targ;
    multiset<int> ms;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        ms.insert(a[i]);
    }
    vector<int> ans;
    for(int i = 0; i < n; i++){
        bool found = false;
        for(int j = i + 1; j < n; j++){
            // ms.erase(ms.find(a[i]));
            // ms.erase(ms.find(a[j]));
            if(ms.count(targ - a[i] - a[j])){
                int need = targ - a[i] - a[j];
                if(need == a[i] && need == a[j]){
                    if(ms.count(need) >= 3){
                        ans.pb(need);
                        ans.pb(need);
                        ans.pb(need);
                    }
                }else if(need == a[i] || need == a[j]){
                    if(ms.count(need) >= 2){
                        ans.pb(need);
                        ans.pb(need);
                        if(need == a[i])ans.pb(a[j]);
                        else ans.pb(a[i]);
                    }
                }else{
                    ans.pb(a[i]);
                    ans.pb(a[j]);
                    ans.pb(need);
                }
                found = true;
                break;
            }
            // ms.insert(a[i]);
            // ms.insert(a[j]);
        }
        if(found)break;
    }
    // deb(ans);
    if(ans.size() != 3){
        puts("IMPOSSIBLE");
        return 0;
    }
    set<int> inds;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < n; j++){
            if(a[j] == ans[i] && inds.find(j + 1) == inds.end()){
                inds.insert(j + 1);
                break;
            }
        }
    }
    for(auto i: inds)cout << i << ' ';

    return 0;
}
// Write Here
