#include<bits/stdc++.h>
using namespace std;
int n, k, x[150], a[150], cnt;
bool check(){
	for(int i = 1; i < k; i++) if(a[x[i]] > a[x[i+1]]) return false;
	return true;
}
void Try(int i){
	for(int j = x[i-1] + 1; j <= n-k+i; j++){
		x[i] = j;
		if(i == k){
			if(check()) cnt++;
		}else Try(i+1);
	}
}
main(){
	cin >> n >> k;
	for(int i = 1; i <= n; i++) cin >> a[i];
	cnt = 0;
	Try(1);
	cout << cnt;
}
