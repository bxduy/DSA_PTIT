#include<bits/stdc++.h>
using namespace std;
void in(int a[], int n){
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
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
	int n; cin >> n;
	sinh(n);
}
