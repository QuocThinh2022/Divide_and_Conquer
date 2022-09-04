// Bai toan Diff
// Cho mang so nguyen a[1..n],
// can tim Diff(a[1..n]) = a[j] -a[i] dat gia tri lon nhat
// ma 1 <= i <= j <= n
// VD mang gom 6 so 4, 2, 5, 8, 1, 7 thi do lech can tim la 6

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
void Diff(ll a[], int l, int r, ll &minval, ll &maxval, ll &maxdiff){
	ll minv1, maxv1, maxd1, minv2, maxv2, maxd2;
	if (l <= r){
		if (l == r){
			maxdiff = 0;
			minval = maxval = a[r];
			return ;
		}
		
		int m = (l+r)/2;
		Diff(a, l, m, minv1, maxv1, maxd1);
		Diff(a, m+1, r, minv2, maxv2, maxd2);
		maxdiff = max({maxv2-minv1, maxd1, maxd2}); // maxdiff cua day con l->r hien tai
		minval = min(minv1, minv2); // phan tu co gia tri nho nhat tu l->r
		maxval = max(maxv1, maxv2); // phan tu co gia tri lon nhat tu l->r 
	}
}

/* ---< Function Main >--- */
int main (){
    FAST_IO; /* ---< FAST_IO >--- */ // If "FASTIO" is used, don't use "endl" because "endl" is slower than "\n" and disable "FASTIO"
    /* ---< code >--- */
	int n; cin >> n;
	ll a[n];
	for (auto &it : a)
		cin >> it;
	ll maxdiff, maxval, minval;
	Diff(a, 0, n-1, minval, maxval, maxdiff);
	cout << maxdiff << ' ' << minval << ' ' << maxval;	
	/* ---< endcode >--- */
    return (0-0);
}

