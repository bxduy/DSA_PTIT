#include<bits/stdc++.h>
using namespace std;
int n, k, s, a[25], cnt;
bool check(){
	int sum = 0;
	for(int i = 1; i <= k; i++) sum += a[i];
	return sum == s;
}
void Try(int i){
	for(int j = a[i-1] + 1; j <= n-k+i; j++){
		a[i] = j;
		if(i == k){
			if(check()) cnt++;
		}else Try(i+1);
	}
}
main(){
	
	while(true){
		cin >> n >> k >> s;
		if(n == 0 && k == 0 && s == 0) break;
		cnt = 0;
		Try(1);
		cout << cnt << endl;
	}
}
