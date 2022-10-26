#include<bits/stdc++.h>
using namespace std;
int a[50], x[50], n, s, ans = INT_MAX;
bool ok, check[50];
void ql(int i, int k, int sum){
	//if(ok) return;
	if(sum == s){
		ans = min(ans, k-1);
		//cout << ans;
		ok = true;
		return;
	}
	for(int j = i; j <= n; j++){
		if(!check[j] && sum + a[j] <= s){
			check[j] = true;
			ql(j, k+1, sum + a[j]);
			check[j] = false;
		}
	}
}
main(){
	cin >> n >> s;
	for(int i = 1; i <= n; i++) cin >>a[i];
	//sort(a+1, a+n+1, greater<int>());
	memset(check, false, sizeof(check));
	ok = false;
	ql(1,1,0);
	cout << ans;
}
