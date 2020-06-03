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


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    freopen("breedflip.in", "r", stdin);
    freopen("breedflip.out", "w", stdout);

    int n;
    string s, t;
    cin >> n >> s >> t;
    int ans = 0;

    vector<int> pos;
    for(int i = 0; i < n; i++)
        if(s[i] == t[i])pos.pb(i);
    
    if(pos[0])ans++;
    if(pos[pos.size() - 1] != n - 1)ans++;
    for(int i = 1; i < (int)pos.size(); i++){
        if(pos[i] - pos[i - 1] > 1)ans++;
    }
    cout << ans << '\n';
    return 0;
}
// Write Here

