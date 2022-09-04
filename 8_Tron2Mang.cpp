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
void Merge(int a[], int n, int b[], int m, int k){
	int i = 0, j = 0, pos = 0;
	int ans[n+m];
	while (i < n && j < m){
		if (a[i] <= b[j])
			ans[pos++] = a[i++];
		else
			ans[pos++] = b[j++];
	}
	while (i < n)
		ans[pos++] = a[i++];
	while (j < m)
		ans[pos++] = b[j++];
	cout << ans[k-1];
}
/* ---< Function Main >--- */
int main (){
    FAST_IO; /* ---< FAST_IO >--- */ // If "FASTIO" is used, don't use "endl" because "endl" is slower than "\n" and disable "FASTIO"
    /* ---< code >--- */
	int n, m, k; cin >> n >> m >> k;
	int a[n], b[m];
	for (auto &it : a)
		cin >> it;
	for (auto &it : b)
		cin >> it;
	Merge(a, n, b, m, k);
	/* ---< endcode >--- */
    return (0-0);
}

