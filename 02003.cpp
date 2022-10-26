#include<bits/stdc++.h>
using namespace std;
int a[20][20], n;
bool ok;
char b[1000];
void nhap(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++) cin >> a[i][j]; 
	}
}
void Try(int i, int j, int k){
	if(i == n && j == n){
		for(int i = 1; i < k; i++) cout << b[i];
		cout << " ";
		ok = true;
		return;
	}
	if(i+1 <= n && a[i+1][j] == 1){
		b[k] = 'D';
		a[i+1][j] = 0;
		Try(i+1, j , k+1);
		a[i+1][j] = 1;
	}
	if(j+1 <= n && a[i][j+1] == 1){
		b[k] = 'R';
		a[i][j+1] = 0;
		Try(i, j+1, k+1);
		a[i][j+1] = 1;
	}
}
main(){
	int t; cin >> t;
	while(t--){
		nhap();
		ok = false;
		if(a[1][1] && a[n][n]) Try(1,1,1);
		if(ok) cout << endl;
		else cout << -1 << endl;
	}
}
