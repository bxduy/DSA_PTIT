#include<bits/stdc++.h>
using namespace std;
int a[100], b[100], n, k;
bool ok;
bool check(){
	for(int i = 1; i <= k; i++) if(a[i] != b[i]) return false;
	return true;
}
void Init(){
	for(int i = 1; i <= k; i++) a[i] = i;
}
void next(){
	int i = k;
	while(i >= 1 && a[i] == n-k+i) i--;
	a[i]++;
	for(int j = i+1; j <= k; j++) a[j] = a[j-1] + 1;
}
main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		Init();
		int ans = 1;
		for(int i = 1; i <= k; i++) cin >> b[i];
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
