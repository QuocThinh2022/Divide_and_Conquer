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
bool searchBinary(int a[], int n, int x){
	int l = 0, r = n-1, m;
	while (l <= r){
		m = (l+r)/2;
		if (a[m] == x)
			return true;
		else if (a[m] < x)
			l = m+1;
		else
			r = m-1;
	}
	return false;
}
/* ---< Function Main >--- */
int main (){
    FAST_IO; /* ---< FAST_IO >--- */ // If "FASTIO" is used, don't use "endl" because "endl" is slower than "\n" and disable "FASTIO"
    /* ---< code >--- */
	int n, k; cin >> n >> k;
	int a[n];
	for (auto &it : a)
		cin >> it;
	cout << (searchBinary(a, n, k) ? "YES":"NO");
	/* ---< endcode >--- */
    return (0-0);
}

