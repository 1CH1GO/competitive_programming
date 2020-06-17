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
 
template<typename T,T MOD = 1000000007>
struct Mint{
    static constexpr T mod = MOD;
    T v;
 
    Mint(): v(0){}
    Mint(signed v) :v(v){}
    Mint(long long t){v = t % MOD; if(v < 0) v += MOD;}
    Mint pow(long long k){
        Mint res(1),tmp(v);
        while(k){
            if(k & 1) res *= tmp;
            tmp *= tmp;
            k >>= 1;
        }
        return res;
    }
    
    static Mint add_identity(){return Mint(0);}
    static Mint mul_identity(){return Mint(1);}
    
    Mint inv(){return pow(MOD-2);}
    Mint& operator+=(Mint a){v += a.v;if(v >= MOD)v -= MOD;return *this;}
    Mint& operator-=(Mint a){v += MOD-a.v;if(v >= MOD)v -= MOD;return *this;}
    Mint& operator*=(Mint a){v = 1LL * v * a.v % MOD;return *this;}
    Mint& operator/=(Mint a){return (*this) *= a.inv();}
    
    Mint operator+(Mint a) const{return Mint(v) += a;}
    Mint operator-(Mint a) const{return Mint(v) -= a;}
    Mint operator*(Mint a) const{return Mint(v) *= a;}
    Mint operator/(Mint a) const{return Mint(v) /= a;}
 
    Mint operator-() const{return v?Mint(MOD - v):Mint(v);}	
 
    bool operator==(const Mint a)const{return v == a.v;}
    bool operator!=(const Mint a)const{return v != a.v;}
    bool operator <(const Mint a)const{return v < a.v;}
    
    static Mint comb(long long n, int k){
        Mint num(1),dom(1);
        for(int i = 0; i < k; i++){
            num *= Mint(n - i);
            dom *= Mint(i + 1);
        }
        return num / dom; 
    }
};
template<typename T,T MOD> constexpr T Mint<T, MOD>::mod;
template<typename T,T MOD>
ostream& operator<<(ostream &os,Mint<T, MOD> m){os<<m.v;return os;}
using M = Mint<int>;
 
vector<M> fact, ifact;
void init(){
    int N = 1000100;
    fact.resize(N);
    ifact.resize(N);
    fact[0] = 1;
    for(int i = 1; i < N; i++)fact[i] = M(i) * fact[i - 1];
    ifact[N - 1] = fact[N - 1].inv();
    for(int i = N - 1; i >= 1; i--)ifact[i - 1] = M(i) * ifact[i];
}

M comb(long long n, int k){
    return fact[n] * ifact[k] * ifact[n - k];
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    init();
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        cout << comb(a, b) << '\n';
    }
    return 0;
}
// Write Here
