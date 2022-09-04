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
ll solve(ll arr[], int n, ll k){
    if (k & 1) // cac vi tri k le lun co gia tri la 1
        return 1;
    if (k <= arr[n-1])
        return solve(arr, n-1, k);
    else if (k == arr[n-1]+1)
        return n+1; // cac vi tri o giua cua lan bien doi thu n co gia tri la n+1
    return solve(arr, n-1, k-arr[n-1]-1);
}
/* ---< Function Main >--- */
int main (){
    FAST_IO; /* ---< FAST_IO >--- */ // If "FASTIO" is used, don't use "endl" because "endl" is slower than "\n" and disable "FASTIO"
    /* ---< code >--- */
    ll arr[50];
    arr[0] = 1;
    for (int i = 1; i < 50; i++){
        arr[i] = arr[i-1]*2+1; // arr[i] = 2^(i+1)-1;
    }
    ll n, k; cin >> n >> k;
    cout << solve(arr, n-1, k); // thuc hien n-1 lan
    /* ---< endcode >--- */
    return (0-0);
}

