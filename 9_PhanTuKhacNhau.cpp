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
int solve(int a[], int b[], int l, int r){
	int ans = r+1;
	while (l <= r){
		int m = (l+r)/2;
		if (a[m] != b[m]){
			ans = m;
			r = m-1;
		}
		else
			l = m+1;
	}
	return ans;
}
/* ---< Function Main >--- */
int main (){
    FAST_IO; /* ---< FAST_IO >--- */ // If "FASTIO" is used, don't use "endl" because "endl" is slower than "\n" and disable "FASTIO"
    /* ---< code >--- */
	int n; cin >> n;
	int a[n], b[n-1];
	for (auto &it : a)
		cin >> it;
	for (auto &it : b)
		cin >> it;
	cout << solve(a, b, 0, n-1)+1;
	/* ---< endcode >--- */
    return (0-0);
}

