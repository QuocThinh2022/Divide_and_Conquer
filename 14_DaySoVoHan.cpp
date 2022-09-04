#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(NULL)
#define MOD 1000000007
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef vector<string> vstr;

struct matrix{
	ll data[2][2];
	
	matrix operator * (matrix khac){
		matrix ans;
		for (int i = 0; i < 2; i++){
			for (int j = 0; j < 2; j++){
				ans.data[i][j] = 0;
				for (int k = 0; k < 2; k++){
					ans.data[i][j] += data[i][k] * khac.data[k][j];
					ans.data[i][j] %= MOD;
				}
			}
		}
		return ans;
	}
};
/* ---< ThinhCPOJ2022 >--- */
/* ---< Function Prototype >--- */
/* ---< Function >--- */
matrix powMatrix(matrix a, int n){
	if (n == 1)
		return a;
	matrix res = powMatrix(a, n/2);
	if (n & 1)
		return res*res*a;
	return res*res;
}
/* ---< Function Main >--- */
int main (){
    FAST_IO; /* ---< FAST_IO >--- */ // If "FASTIO" is used, don't use "endl" because "endl" is slower than "\n" and disable "FASTIO"
    /* ---< code >--- */
	int n; cin >> n;
	matrix ans;
	ans.data[0][0] = 1;
	ans.data[0][1] = 1;
	ans.data[1][0] = 1;
	ans.data[1][1] = 0;
	ans = powMatrix(ans, n);
	cout << ans.data[0][1];
	/* ---< endcode >--- */
    return (0-0);
}

