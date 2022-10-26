#include<bits/stdc++.h>
using namespace std;
int n, w, a[105], c[105], x[105], f[105], ans = INT_MIN;
bool check(){
	int sum = 0;
	for(int i = 1; i <= n; i++){
		if(x[i] == 1){
			sum += c[i];
		}
	}
	return sum <= w;
}
void up(){
	int sum = 0;
	for(int i = 1; i <= n; i++) if(x[i] == 1)sum += a[i];
	if(ans < sum){
		ans = sum;
		for(int i = 1; i <= n; i++) f[i] = x[i];
	}
}
void Try(int i){
	for(int j = 0; j < 2; j++){
		x[i] = j;
		if(i == n){
			if(check()){
				up();
			}
		}else Try(i+1);
	}
}
main(){
	cin >> n >> w;
	for(int i = 1; i <= n; i++) cin >> a[i];
	for(int i = 1; i <= n; i++) cin >> c[i];
	Try(1);
	cout << ans << endl;
	for(int i = 1; i <= n; i++) cout << f[i] << " ";
}
