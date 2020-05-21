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

	int n;
	while(cin >> n){
		priority_queue<int> pq;
		stack<int> st;
		queue<int> q;
		bool pqu = true, sta = true, qu = true;
		for(int i = 0; i < n; i++){
			int op, x;
			cin >> op >> x;
			if(op == 1)pq.push(x), st.push(x), q.push(x);
			else{
				// deb(st.top(), pq.top(), q.front());
				if(sta && !st.empty() && st.top() == x){sta = true;st.pop();}
				else sta = false;

				if(pqu && !pq.empty() && pq.top() == x){pqu = true;pq.pop();}
				else pqu = false;

				if(qu && !q.empty() && q.front() == x){qu = true;q.pop();}
				else qu = false;
			}
			// deb(pqu, qu, sta);
		}
		if(!sta && !qu && !pqu)cout << "impossible\n";
		else{
			int c = 0;
			if(sta)c++;
			if(pqu)c++;
			if(qu)c++;
			if(c > 1)cout << "not sure\n";
			else{
				if(sta)cout << "stack\n";
				else if(qu)cout << "queue\n";
				else cout << "priority queue\n";
			}
		}

	}
	return 0;
}
// Write Here
