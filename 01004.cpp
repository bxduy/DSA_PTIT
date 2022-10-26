#include<bits/stdc++.h>
using namespace std;
int n, k, a[100];
bool ok;
void Init(){
	for(int i = 1; i <= k; i++){
		a[i] = i;
	}
}
void next(){
	int i = k;
	while(i >= 1 && a[i] == n-k+i) i--;
	if(i == 0) ok = false;
	a[i] ++;
	for(int j = i+1; j <= k; j++) a[j] = a[j-1] + 1;
}
main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		Init();
		ok = true;
		while(ok){
			for(int i = 1; i <= k; i++) cout << a[i];
			cout << " ";
			next();
		}
		cout << endl;
	}
}
