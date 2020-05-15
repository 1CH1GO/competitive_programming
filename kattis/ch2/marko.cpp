// 失敗するからこそ そこから立ち向かって行く強さがあってそんな強さが本当の強さだと私は思うから
#ifdef DAIJOBU
#include "/home/v-o_o-v/deb.h"
#define deb(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#include <bits/stdc++.h>
#define deb(x...)
#endif 

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	unordered_map<char, char> c;
    c['a'] = '2';
    c['b'] = '2';
    c['c'] = '2';
    c['d'] = '3';
    c['e'] = '3';
    c['f'] = '3';
    c['g'] = '4';
    c['h'] = '4';
    c['i'] = '4';
    c['j'] = '5';
    c['k'] = '5';
    c['l'] = '5';
    c['m'] = '6';
    c['n'] = '6';
    c['o'] = '6';
    c['p'] = '7';
    c['q'] = '7';
    c['r'] = '7';
    c['s'] = '7';
    c['t'] = '8';
    c['u'] = '8';
    c['v'] = '8';
    c['w'] = '9';
    c['x'] = '9';
    c['y'] = '9';
    c['z'] = '9';

    int n;
    cin >> n;

    vector<string> v;

    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        v.push_back(s);
    }

    string numbers;
    cin >> numbers;

    int possible = 0;
    for(int i = 0; i < n; i++) {
        if(numbers.length() != v[i].length()) {
            continue;
        }

        bool same = true;
        for(int j = 0; j < numbers.length(); j++) {
            if(numbers[j] != c[v[i][j]]) {
                same = false;
                break;
            }
        }

        if(same) {
            possible++;
        }
    }

    cout << possible << endl;
	return 0;
}
// Write Here
