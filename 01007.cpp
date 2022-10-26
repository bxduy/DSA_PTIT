#include<bits/stdc++.h>
using namespace std;
void in(int a[], int n){
	for(int i = 0; i < n; i++){
		cout << (char)(a[i] + 65);
	}
	cout << " ";
}
bool kt(int a[], int n, int k){
	int s = 0;
	for(int i = 0; i < n; i++){
		s += a[i];
	}
	if(s == k) return true;
	return false;
}
void sinh(int n){
	bool check = true;
	int a[n];
	for(int i = 0; i < n; i++) a[i] = 0;
	while(check){
		 in(a, n);
		int i = n-1;
		while(i >= 0 && a[i] == 1){
			a[i] = 0;
			i--;
		}
		if(i >= 0) a[i] = 1;
		else check = false;
	}
}
main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n ;
		sinh(n);
		cout << endl;
	}	
}
