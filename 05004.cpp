#include<bits/stdc++.h>
using namespace std;
int count(int a[], int n){
	int ans = 1;
	int f[n];
	f[0] = 1;
	for(int i = 1; i < n ;i++){
		f[i] = 1;
		for(int j = 0; j < i; j++){
			if(a[j] < a[i]) f[i] = max(f[i], f[j]+1);
		}
		ans = max(ans, f[i]);
	}
	return ans;
}
main(){
	//int t; xin >> t;
	//while(t--){
		int n; cin >> n;
		int a[n];
		for(int &x : a) cin >> x;
		cout << count(a, n) << endl;
	//}
}

