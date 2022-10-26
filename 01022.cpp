#include<bits/stdc++.h>
using namespace std;
int a[100], b[100], n;
bool ok;
bool check(){
	for(int i = 1; i <= n; i++) if(a[i] != b[i]) return false;
	return true;
}
void Init(){
	for(int i = 1; i <= n; i++) a[i] = i;
}
void next(){
	int i = n-1;
	while(i >= 1 && a[i] > a[i+1]) i--;
	if(i == 0) cout << n << endl;
	int j = n;
	while(a[i] > a[j]) j--;
	swap(a[i], a[j]);
	sort(a+i+1, a+n+1);
}
main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		Init();
		int ans = 1;
		for(int i = 1; i <= n; i++) cin >> b[i];
		if(check()) cout << ans << endl;
		else{
			while(!check()) {
				next();
				ans++;
			}
			cout << ans << endl;
		}
		
	}
}
