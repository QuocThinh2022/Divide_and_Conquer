#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(NULL)
#define MOD 1000000007
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef vector<string> vstr;
/* ---< CodeEz ThinhCPOJ2022 >--- */
/* ---< Function Prototype >--- */
/* ---< Function >--- */
//ll powbin(ll a, int n){
//	ll ans = 1;
//	while (n){
//		if (n & 1){
//			ans *= a;
//			ans %= MOD;
//		}
//		a *= a;
//		n >>= 1;	
//		a %= MOD;
//	}
//	return ans;
//}
ll powmod(ll a, int n){
	if (n == 0)
		return 1;
	ll res = powmod(a, n/2) % MOD;
	if (n & 1)
		return ((res*res) % MOD)*a % MOD;
	return res*res % MOD;
}

/* ---< Function Main >--- */
int main (){
    FAST_IO; /* ---< FAST_IO >--- */ // If "FASTIO" is used, don't use "endl" because "endl" is slower than "\n" and disable "FASTIO"
    /* ---< code >--- */
	int n, k; cin >> n >> k;
	cout << powmod(n, k);
	/* ---< endcode >--- */
    return (0-0);
}

