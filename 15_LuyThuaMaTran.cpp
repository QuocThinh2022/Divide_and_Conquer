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
	int n;
	ll data[10][10];
	
	void nhap();
	void print();
	
	matrix operator * (matrix khac){
		matrix ans;
		ans.n = n;
		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				ans.data[i][j] = 0;
				for (int k = 0; k < n; k++){
					ans.data[i][j] += data[i][k] * khac.data[k][j];
					ans.data[i][j] %= MOD;
				}
			}
		}
		return ans;
	}
};

void matrix::nhap(){
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cin >> data[i][j];
		}
	}
}

void matrix::print(){
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cout << data[i][j] << ' ';
		}
		cout << '\n';
	}
}

matrix powmatrix(matrix a, int n){
	if (n == 1)
		return a;
	matrix res = powmatrix(a, n/2);
	if (n & 1)
		return res*res*a;
	return res*res;
}
/* ---< CodeEz ThinhCPOJ2022 >--- */
/* ---< Function Prototype >--- */
/* ---< Function >--- */

/* ---< Function Main >--- */
int main (){
    FAST_IO; /* ---< FAST_IO >--- */ // If "FASTIO" is used, don't use "endl" because "endl" is slower than "\n" and disable "FASTIO"
    /* ---< code >--- */
	matrix ans;
	int k; cin >> ans.n >> k;
	ans.nhap();
	ans = powmatrix(ans, k);
	ans.print();
	/* ---< endcode >--- */
    return (0-0);
}

