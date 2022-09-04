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
ll crossSum(ll a[], int l, int m, int r){
	ll left = LLONG_MIN, right = LLONG_MIN, sum = 0;
	for (int i = m; i >= l; i--){ // day con lien tiep lon nhat tu vi tri m tro ve truoc
		sum += a[i];
		if (left < sum)
			left = sum;
	}
	sum = 0;
	for (int i = m+1; i <= r; i++){ // day con lien tiep lon nhat tu vi tri m+1 tro ve sau
		sum += a[i];
		if (right < sum)
			right = sum;
	}
	return max({left, right, left+right}); // day left, right and crossSum
}

ll solve(ll a[], int l, int r){
	if (l > r)
		return LLONG_MIN;
	if (l == r)
		return a[l];
	int m = (l+r)/2;
	return max({solve(a, l, m), solve(a, m+1, r), crossSum(a, l, m, r)});
}
/* ---< Function Main >--- */
int main (){
    FAST_IO; /* ---< FAST_IO >--- */ // If "FASTIO" is used, don't use "endl" because "endl" is slower than "\n" and disable "FASTIO"
    /* ---< code >--- */
//	int n; cin >> n;
//	ll ans = INT_MIN, sum = 0, x;
//	for(int i = 0; i < n; i++){
//		cin >> x;
////		C1
////		sum += x;
////		if (sum < 0)
////			sum = 0;
////		ans = max(ans, sum);
//		
////		C2
////		sum = max(x, sum+x);
////		ans = max(ans, sum);
//	}
//	cout << ans;

	int n; cin >> n;
	ll a[n];
	for (auto &it : a)
		cin >> it;
	cout << solve(a, 0, n-1);
	/* ---< endcode >--- */
    return (0-0);
}

