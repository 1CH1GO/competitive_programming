// 失敗するからこそ そこから立ち向かって行く強さがあってそんな強さが本当の強さだと私は思うから
#include <bits/stdc++.h>
using namespace std;

template<typename T> ostream& operator<<(ostream &os, const vector<T> &v) { os << '{'; string sep; for (const auto &x : v) os << sep << x, sep = ", "; return os << '}'; }
template<typename T, size_t size> ostream& operator<<(ostream &os, const array<T, size> &arr) { os << '{'; string sep; for (const auto &x : arr) os << sep << x, sep = ", "; return os << '}'; }
template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }

#define fi first
#define se second
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
typedef long long lint;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

int det(pair<int, int> a, pair<int, int> b, pair<int, int> c){
    set<int> y, x;
    y.insert({a.se - b.se, a.se - c.se, b.se - c.se});
    x.insert({a.fi - b.fi, a.fi - c.fi, b.fi - c.fi});
    if(y.count(0) && x.count(0)){
        int ans = 0;
        ans += (c.fi * b.se - b.fi * c.se);
        ans -= (c.fi * a.se - a.fi * c.se);
        ans += (b.fi * a.se - a.fi * b.se);
        return abs(ans);
    }
    return 0;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    freopen("triangles.in", "r", stdin);
    freopen("triangles.out", "w", stdout);

    int n;
    cin >> n;
    pair<int, int> cors[n];
    for(int i = 0; i < n; i++)
        cin >> cors[i].fi >> cors[i].se;
    
    int ans = 0;
    for(int i = 0; i < n - 2; i++){
        for(int j = i + 1; j < n - 1; j++){
            for(int k = j + 1; k < n; k++){
                ans = max(ans, det(cors[i], cors[j], cors[k]));
                // cerr << (det(cors[i], cors[j], cors[k])) << '\n';
            }
        }
    }
    cout << ans << '\n';
    return 0;
}
// Write Here
