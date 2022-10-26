#include<bits/stdc++.h>
using namespace std;
void out(int a[], int n){
	for(int i = 0; i < n; i++) cout << a[i] << " ";
	cout << endl;
}
void arrange(int a[], int n){
	vector<string> v;
	for(int i = 0; i < n-1; i++){
		for(int j = i+1; j < n; j++){
			if(a[i]>a[j]) swap(a[i], a[j]);
		}
		string tmp = "";
		tmp += "Buoc ";
		tmp += to_string(i+1);
		tmp += ": ";
		for(int i = 0; i < n; i++){	
			tmp += to_string(a[i]);
			tmp += " ";
		}
		v.push_back(tmp);
	}
	for(int i = v.size()-1; i >= 0; i--){
		cout << v[i] << endl;
	}
}
main(){
	int t, n; 
	cin >> t;
	while(t--){
		cin >> n; int a[n];
			for(int &x : a) cin >> x;
			arrange(a, n);	
	}		
}
