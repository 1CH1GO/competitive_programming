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

	int grid[4][4];
	vector<int> ans[4];
	for(int i = 0; i < 4; i++){
		ans[i].resize(4);
		for(int j = 0; j < 4; j++)cin >> grid[i][j];
	}
	int op;
	cin >> op;
	switch(op){
		case 0:
			for(int i = 0; i < 4; i++){
				vector<int> r;
				for(int j = 0; j < 4; j++){
					if(grid[i][j])r.push_back(grid[i][j]);
				}
				vector<int> mr;
				int  j = 0;
				while(j < (int)r.size()){
					if(r[j] == r[j + 1]){
						mr.push_back(2 * r[j]);
						j += 2;
					}else mr.push_back(r[j]), j++;
				}
				while((int)mr.size() != 4)mr.push_back(0);
				ans[i] = mr;
			}
			break;
		
		case 2:
			for(int i = 0; i < 4; i++){
				vector<int> r;
				for(int j = 0; j < 4; j++){
					if(grid[i][j])r.push_back(grid[i][j]);
				}
				vector<int> mr;
				int  j = r.size() - 1;
				while(j >= 0){
					if(r[j] == r[j - 1]){
						mr.push_back(2 * r[j]);
						j -= 2;
					}else mr.push_back(r[j]), j--;
				}
				while((int)mr.size() != 4)mr.push_back(0);
				reverse(mr.begin(), mr.end());
				ans[i] = mr;
			}
			break;
		
		case 3:
			for(int i = 0; i < 4; i++){
					vector<int> c;
					for(int j = 0; j < 4; j++){
						if(grid[j][i])c.push_back(grid[j][i]);
					}
					vector<int> mc;
					int  j = c.size() - 1;
					while(j >= 0){
						if(c[j] == c[j - 1]){
							mc.push_back(2 * c[j]);
							j -= 2;
						}else mc.push_back(c[j]), j--;
					}
					while((int)mc.size() != 4)mc.push_back(0);
					reverse(mc.begin(), mc.end());
					for(int j = 0; j < 4; j++)ans[j][i] = mc[j];
			}
			break;

		case 1:
			for(int i = 0; i < 4; i++){
					vector<int> c;
					for(int j = 0; j < 4; j++){
						if(grid[j][i])c.push_back(grid[j][i]);
					}
					vector<int> mc;
					int  j = 0;
					while(j < (int)c.size()){
						if(c[j] == c[j + 1]){
							mc.push_back(2 * c[j]);
							j += 2;
						}else mc.push_back(c[j]), j++;
					}
					while((int)mc.size() != 4)mc.push_back(0);
					// reverse(mc.begin(), mc.end());
					for(int j = 0; j < 4; j++)ans[j][i] = mc[j];
			}
			break;

	}
	for(auto r: ans){
		for(auto c: r)cout << c << ' ';
		cout << '\n';
	}
	return 0;
}
// Write Here
