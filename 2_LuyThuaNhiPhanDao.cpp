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
int rev(int n){
	int ans = 0;
	while (n){
		ans = 10*ans + n % 10;
		n /= 10;
	}
	return ans;
}

ll powmod(ll a, int n){
	if (n == 0)
		return 1;
	ll res = powmod(a, n/2) % MOD;
	if (n & 1)
		return (res*res % MOD)*a % MOD;
	return res*res % MOD;
}
/* ---< Function Main >--- */
int main (){
    FAST_IO; /* ---< FAST_IO >--- */ // If "FASTIO" is used, don't use "endl" because "endl" is slower than "\n" and disable "FASTIO"
    /* ---< code >--- */
	int n; cin >> n;
	cout << powmod(n, rev(n));
	/* ---< endcode >--- */
    return (0-0);
}

