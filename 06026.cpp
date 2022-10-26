#include<bits/stdc++.h>
using namespace std;
main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		vector<string> v;
		for(int &x : a) cin >> x;
		for(int i = 0; i < n; i++){
			bool ok = false;
			
			for(int j = 0; j < n-i-1; j++){
				if(a[j] > a[j+1]){
					swap(a[j], a[j+1]);
					ok = true;
				}
			}
			if(ok){
				string tmp = "";
				tmp = tmp + "Buoc " + to_string(i+1) + ": ";
				for(int x : a) tmp = tmp + to_string(x) + " ";
				v.push_back(tmp);
			}else break;
		}
		for(int i = v.size()-1; i >= 0; i--) cout << v[i] << endl;	
	}
}
