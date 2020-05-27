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

	deque<int> fir, sec;
	int q;
	cin >> q;
	while(q--){
		string op;
		cin >> op;
		if(op == "push_back"){
			int el;
			cin >> el;
			sec.push_back(el);
			if(sec.size() - fir.size() >= 1){
				int sec_fi = sec.front();
				sec.pop_front();
				fir.push_back(sec_fi);
			}
		}else if(op == "push_front"){
			int el;
			cin >> el;
			fir.push_front(el);
			if(fir.size() - sec.size() > 1){
				int fir_las = fir.back();
				fir.pop_back();
				sec.push_front(fir_las);
			}
		}else if(op == "push_middle"){
			int el;
			cin >> el;
			int mid = (fir.size() + sec.size() + 1) / 2;
			if((int)fir.size() < mid)sec.push_front(el);
			else fir.push_back(el);
			// deb(fir, sec);
			if((int)(sec.size() - fir.size()) >= 1){
				// deb("ll");
				int sec_fi = sec.front();
				sec.pop_front();
				fir.push_back(sec_fi);
			}
			else if(fir.size() - sec.size() > 1){
				int fir_las = fir.back();
				fir.pop_back();
				sec.push_front(fir_las);
			}
			// deb(fir, sec);
		}else{
			int ind;
			cin >> ind;
			if(ind >= (int)fir.size()){
				ind -= fir.size();
				cout << sec[ind] << '\n';
			}else cout << fir[ind] << '\n';
		}
		// deb(firc, sec);
	} 
	return 0;
}
// Write Here
//  3 5 |1 9

// 41 | 83 14