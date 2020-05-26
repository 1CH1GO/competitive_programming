// 失敗するからこそ そこから立ち向かって行く強さがあってそんな強さが本当の強さだと私は思うから
#ifdef DAIJOBU
#include "/home/v-o_o-v/deb.h"
#define deb(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#include <bits/stdc++.h>
#define deb(x...)
#endif 

using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	int a[n], A[n], B[n];
	for(int i = 0; i < n; i++)cin >> a[i];
	indexed_set S, T;
	for(int i = 0; i < n; i++){
		S.insert(a[i]);
		if(S.order_of_key(a[i]) == i)A[i] = 1;
		else A[i] = 0;
	}
	for(int i = n - 1; i >= 0; i--){
		T.insert(a[i]);
		if(T.order_of_key(a[i]) == 0)B[i] = 1;
		else B[i] = 0;
	}
	int ans = 0;
	for(int i = 0; i < n; i++)if(A[i] && B[i])ans++;
	cout << ans << '\n';
	return 0;
}
// Write Here
