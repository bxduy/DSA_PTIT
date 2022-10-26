#include<bits/stdc++.h>
using namespace std;
main(){
	int n; cin >> n;
	int a[n], vt[n+1];
	for(int i = 0; i < n; i++){
		cin >> a[i];
		vt[a[i]] = i;
	}
	int cnt = 1, m = INT_MIN;
	for(int i = 1; i < n; i++){
		if(vt[i+1] > vt[i]){
			cnt++;
		}else{
			m = max(m, cnt);
			cnt = 1;
		}
	}
	m = max(m, cnt);
	cout << n-m;
}
