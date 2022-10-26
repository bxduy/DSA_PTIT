#include<bits/stdc++.h>
using namespace std;
int a[100], b[100], s, n, m, ans;
bool ok = true;
int kt(){
	int sum = 0, cnt = 0;
	for(int i = 0; i < n; i++){
		if(a[i]){
			sum += b[i];
			cnt++;
		}
	}
	if(s!= sum) return 0;
	if(s == sum)return cnt;
}
void init(){
	for(int i = 0; i < n; i++) a[i] = 0;
}
void sinh(){
	int i = n-1;
	while(i >= 0 && a[i]){
		a[i] = 0;
		i--;
	}
	if(i<0) ok = false;
	else a[i] = 1;
}
main(){
	
		cin >> n >> s;
		for(int i = 0; i < n; i++) cin >> b[i];
		ans = INT_MAX;
	ok = true;
	while(ok){
		sinh();
		int x = kt();
		if(x != 0)
		ans = min(ans, x);
	}
		cout << ans;
	
}
