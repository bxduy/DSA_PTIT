#include<bits/stdc++.h>
using namespace std;
main(){
	int n; cin >> n;
	int a[n];
	vector<string> v;
	for(int &x : a) cin >> x;
	for(int i = 0; i < n; i++){
		int x = a[i], pos = i-1;
		while(pos >= 0 && a[pos] > x){
			a[pos+1] = a[pos];
			pos--;
		}
		a[pos+1] = x;
		string tmp = "";
		tmp = tmp + "Buoc " + to_string(i) + ": ";
		for(int j = 0; j <= i; j++){
			tmp = tmp + to_string(a[j]) + " ";
		}
		v.push_back(tmp);
	}
	for(int i = v.size()-1; i >= 0; i--) cout << v[i] << endl;
}
