#include<bits/stdc++.h>
using namespace std;
void in(int a[], int n){
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}
void selection_sort(int a[], int n){
	vector<string> v;
	for(int i = 0; i < n-1; i++){
		int index=i;
		for(int j = i+1; j < n; j++){
			if(a[index] > a[j]) index = j;
		}
		swap(a[index], a[i]);
		string tmp = "";
		tmp = tmp + "Buoc " + to_string(i+1) + ": ";
		for(int i = 0; i < n; i++) tmp = tmp + to_string(a[i]) + " ";
		v.push_back(tmp);
	}
	for(int i = v.size()-1; i >= 0; i--){
		cout << v[i] << endl;
	}
}
main(){
	
		int n; cin >> n; int a[n];
		for(int &x : a) cin >> x;
		selection_sort(a, n);
	
	
}
