#include<bits/stdc++.h>
using namespace std;
main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n; int a[n], b[n-1];
		int ok = 1;
		for(int &x : a) cin >> x;
		for(int &x : b) cin >> x;
		for(int i = 0; i < n-1; i++){
			if(a[i] != b[i]){
				cout << i+1 << endl;
				break;
			}
		}
		//if(!ok) cout << n-1 << endl;
	}
}
