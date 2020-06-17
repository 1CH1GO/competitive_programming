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
int a[maxn];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, target;
    cin >> n >> target;
    multiset<int> ms;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        a[i] = x;
        ms.insert(x);
    }
    vector<int> ans;
    for(auto el: ms){
        if(el != target - el && ms.count(target - el) >= 1){
            ans.pb(el);
            ans.pb(target - el);
            break;
        }else if(el == target - el && ms.count(el) > 1){
            ans.pb(el);
            break;
        }
    }
    deb(ans);
    if(ans.size()){
        if(ans.size() == 1){
            for(int i = 0; i < n; i++){
                if(a[i] == ans[0]){
                    cout << i + 1 << ' ';
                    break;
                }
            }
            for(int i = n - 1; i >= 0; i--){
                if(a[i] == ans[0]){
                    cout << i + 1 << '\n';
                    break;
                }
            }
        }else{
            for(int i = 0; i < n; i++){
                if(a[i] == ans[0]){
                    cout << i + 1 << ' ';
                    break;
                }
            }
            for(int i = n - 1; i >= 0; i--){
                if(a[i] == ans[1]){
                    cout << i + 1 << '\n';
                    break;
                }
            }

        }
    }else cout << "IMPOSSIBLE\n";
    return 0;
}
// Write Here
