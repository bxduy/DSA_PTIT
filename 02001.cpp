#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> v;
void Try(int a[], int n){
    if(n > 0){
    	vector<int> x;
    	for(int i = 0; i < n; i++) x.push_back(a[i]);
    	v.push_back(x);
    	for(int i = 0; i < n-1; i++){
    		a[i] = a[i] + a[i+1];
		}
		Try(a, n-1);
	}
}
main(){
    int t;
    cin >> t;
    while(t--){
    	int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        Try(a, n);
        reverse(v.begin(), v.end());
        for(auto x : v){
        	cout << "[";
        	for(int i = 0; i < x.size()-1; i++) cout << x[i] << " ";
        	cout << x.back();
        	cout << "]";
        	cout << " ";
		}
		cout << endl;
        v.clear();
    }
}
