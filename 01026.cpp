#include<bits/stdc++.h>
using namespace std;
int a[30], n;
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
	if(i == 0) ok= false;
	else{
		a[i] = 1;
	}
}
bool check(){
	if(a[1] == 0 || a[n] == 1) return false;
	int cnt = 0;
	for(int i = 2; i <= n; i++){
		if(a[i] == 1 && a[i-1] == 1) return false;
		if(a[i] == 0) cnt++;
		else cnt = 0;
		if(cnt > 3) return false;
	}
	return true;
}
main(){
	cin >> n;
	ok = true;
	while(ok){
		if(check()){
			for(int i = 1; i <= n; i++){
				if(a[i] == 1) cout << 8;
				else cout << 6;
			}
			cout << endl;
		}
		next();
	}
}
