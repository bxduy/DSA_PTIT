#include<bits/stdc++.h>
using namespace std;
int a[25], check[25], ok, sum, n, k;
void Try(int s, int cnt){
	if(cnt == k){
		ok = 1;
		return;
	}
	if(ok == 1) return;
	for(int j = 1; j <= n; j++){
		if(check[j] == 0){
			check[j] = 1;
			if(s == sum) Try(0, cnt+1);
			else if(s < sum) Try(s + a[j], cnt);
			else return;
		}
		check[j] = 0;
	}
}
void inp(){
	cin >> n >> k;
	sum = 0;
	memset(check, 0 , sizeof(check));
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		sum += a[i];
	}
	ok = 0;
	if(sum % k != 0){
		cout << 0 << endl;
		return;
	}else sum /= k;
	Try(0, 0);
	if(ok == 1) cout << 1 << endl;
	else cout << 0 << endl;
}
main(){
	int t; cin >> t;
	while(t--){
		inp();
	}
}
