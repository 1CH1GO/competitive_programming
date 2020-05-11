#include <bits/stdc++.h>
using namespace std;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());


int main(int argc, char* argv[]){
	
	int n = rng() % 1000000 + 1;
	cout << n << '\n';
	return 0;
}
