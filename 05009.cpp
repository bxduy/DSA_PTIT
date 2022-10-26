#include<bits/stdc++.h>
using namespace std;
int n, sum, a[200];
bool ok;

void ql( int i, int s){
	if(s == sum/2){
		ok = true;
		return;
	}
	if(ok) return;
	for(int j = i; j < n; j++){
		if(s + a[j] <= sum/2)
		ql( i+1, s+a[j]);
	}
}
void inp(){
	ok = false;
		cin >> n;
		
		sum = 0;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		sum += a[i];
	}
	if(sum % 2){
		cout << "NO" << endl;
		return ;
	}
		ql(1, 0);
		if(!ok) cout << "NO" << endl;
		else cout << "YES" << endl;
		
}
main(){
	int t; cin >> t;
	while(t--){
		inp();	
	}
}
