#include<bits/stdc++.h>
using namespace std;
int a[100], n;
bool ok;
void Init(){
	for(int i = 1; i <= n; i++) a[i] = i;
}
void next(){
	int i = n-1;
	while(i >= 1 && a[i] > a[i+1]) i--;
	if(i == 0) ok = false;
	int j = n;
	while(a[i] > a[j]) j--;
	swap(a[i], a[j]);
	reverse(a+i+1, a+n+1);
}
main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		Init();
		ok = true;
		while(ok){
			for(int i = 1; i <= n; i++) cout << a[i];
			cout << " ";
			next();
		}
		cout << endl;
	}
}
