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

lint f(lint x){
    return x * (x + 1) / 2;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    freopen("race.in", "r", stdin);
    freopen("race.out", "w", stdout);

    lint k, t;
    cin >> k >> t;
    while(t--){
        lint n;
        cin >> n;
        int left = 0, right = 0, time = 0;
        for(int i = 1;; i++){
            left += i;
            time++;
            if(left + right >= k)break;
            if(i >= n){
                right += i;
                time++;
                if(left + right >= k)break;
            }
        }

        cout << time << '\n';
    }
    return 0;
}
// Write Here

