#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int a[], int n){
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < n - 1; i++){
		for(int j = n - 1; j > i; j--){
			if(a[j] < a[j-1]) swap(a[j], a[j-1]);
		}
		cout << "Buoc " << i+1 << ": ";
		for(int i = 0; i < n; i++) cout << a[i] << " ";
		cout << endl;
	}
}
main(){
	int n; cin >> n; int a[n];
	bubble_sort(a, n);
}
