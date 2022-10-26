#include<bits/stdc++.h>
using namespace std;
int a[100], n;
bool ok;
void Init(){
	for(int i = 1; i <= n; i++) a[i] = 0;
}
void next(){
	int i = n;
	while(i >= 1 && a[i] == 1){
		a[i] = 0;
		i--;
	}
	if(i == 0) ok = false;
	else a[i] = 1;
}
bool check(){
	if(a[1] == 0 || a[n] == 1) return false;
	for(int i = 1; i < n; i++) if(a[i] == 1 && a[i+1] == 1) return false;
	return true;
}
main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		Init();
		ok = true;
		while(ok){
			if(check()){
				for(int i = 1; i <= n; i++){
					if(a[i] == 1) cout << "H";
					else cout << "A";
				}
				cout << endl;
			}
			next();
		}
		cout << endl;
	}
}
