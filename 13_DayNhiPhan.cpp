#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(NULL)
#define MOD 1000000007
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef vector<string> vstr;
/* ---< ThinhCPOJ2022 >--- */
/* ---< Function Prototype >--- */
/* ---< Function >--- */
int solve(ll fibo[], int n, ll k){
	if (n <= 2)
		return n-1;
	if (k <= fibo[n-2])
		return solve(fibo, n-2, k);
	return solve(fibo, n-1, k-fibo[n-2]);
}
/* ---< Function Main >--- */
int main (){
    FAST_IO; /* ---< FAST_IO >--- */ // If "FASTIO" is used, don't use "endl" because "endl" is slower than "\n" and disable "FASTIO"
    /* ---< code >--- */
	ll fibo[94];
	fibo[1] = 1;
	fibo[2] = 1;
	for (int i = 3; i <= 92; i++){
		fibo[i] = fibo[i-1] + fibo[i-2];
	}
	
	ll n, k; cin >> n >> k;
	cout << solve(fibo, n, k);
	/* ---< endcode >--- */
    return (0-0);
}

