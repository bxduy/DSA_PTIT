#include<bits/stdc++.h>
using namespace std;
int a[200], b[200], n, k;
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
	int sum = 0;
	for(int i = 1; i <= n; i++){
		if(a[i]) sum += b[i];
	}
	return sum == k;
}
main(){
	cin >> n >> k;
	for(int i = 1; i <= n; i++) cin >> b[i];
	Init();
	ok = true;
	int ans = 0;
	while(ok){
		if(check()){
			for(int i = 1; i <= n; i++){
				if(a[i]){
					cout << b[i] << " ";
				}
			}
			ans++;
			cout << endl;
		}
		next();
	}
	cout << ans;
}
