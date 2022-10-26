#include<bits/stdc++.h>
using namespace std;
int a[100][100], x[100], cot[100], d1[100], d2[100], n, ans ;
void inp(){
	n = 8;
	for(int i = 1; i <= n; i++) for(int j = 1; j <= n; j++) cin >> a[i][j];
	memset(cot, 1, sizeof(cot));
	memset(d1, 1, sizeof(d1));
	memset(d2, 1, sizeof(d2));
	ans = 0;
}
void ql(int i){
	for(int j = 1; j <= n; j++){
		if(cot[j] && d1[n-j+i] && d2[i+j-1]){
			x[i] = j;
			cot[j] = d1[i+n-j] = d2[i+j-1] = 0;
			if(i == n){
				int sum = 0;
				for(int k = 1; k <= n; k++) sum += a[k][x[k]];
				ans = max(ans, sum);
			}else ql(i+1);
			cot[j] = d1[i+n-j] = d2[i+j-1] = 1;
		}
	}
}
main(){
	int t; cin >> t;
	int x = t;
	while(t--){
		
		inp();
		ql(1);
		cout << "Test " << x-t << ": " << ans << endl;
	}
}

