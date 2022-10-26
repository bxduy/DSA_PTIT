#include<bits/stdc++.h>
using namespace std;
long long cmin = long long_MAX, fopt = 1e9, n, c[100][100], a[100], res= 0 ;
bool used[100];
void inp(){
	cin >> n;
	for(long long i = 1; i <= n; i++){
		for(long long j = 1; j <= n; j++){
			cin >> c[i][j];
			if(c[i][j] != 0) cmin = min(cmin, c[i][j]);
		}
	}
	memset(used, false, sizeof(used));
}
void ql(long long i){
	for(long long j = 2; j <= n; j++){
		if(!used[j]){
			used[j] = true;
			a[i] = j;
			res += c[a[i-1]][a[i]];
			if(i == n){
				fopt = min(fopt, res+c[a[n]][a[1]]);
			}else if(res + cmin*(n-i+1) < fopt){
				ql(i+1);
			}
			used[j] = false;
			res -= c[a[i-1]][a[i]];
		}
	}
}
main(){
	inp();
	a[1]=1;
	ql(2);
	cout << fopt;
}

