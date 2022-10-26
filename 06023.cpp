#include<bits/stdc++.h>
using namespace std;
void out(int a[], int n){
	for(int i = 0; i < n; i++) cout << a[i] << " ";
	cout << endl;
}
void arrange(int a[], int n){
	for(int i = 0; i < n-1; i++){
		for(int j = i+1; j < n; j++){
			if(a[i]>a[j]) swap(a[i], a[j]);
		}
		cout << "Buoc " << i+1 << ": ";
		out(a, n);
	}
}
main(){
	int t, n; 
	
		cin >> n; int a[n];
		for(int &x : a) cin >> x;
		arrange(a, n);
	
}
