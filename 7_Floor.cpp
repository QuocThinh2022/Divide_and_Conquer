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
int upperBound(int a[], int n, int x){
	int l = 0, r = n-1, ans = n, m;
	while (l <= r){
		m = (l+r)/2;
		if (a[m] > x){
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
	int n, x; cin >> n >> x;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int pos = upperBound(a, n, x) - 1;
	if (pos == -1){
		cout << -1;
		return 0;
	}
	cout << a[pos];
	/* ---< endcode >--- */
    return (0-0);
}

