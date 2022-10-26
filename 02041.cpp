#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[100001];
	a[1] = 0; a[2] = a[3] = 1;
	for(int i = 4; i <= 100000; i++){
		int m = a[i-1];
		if(i%3 == 0) m = min(m, a[i/3]);
		 if(i % 2 == 0) m = min(m, a[i/2]);
		a[i] = m + 1;
	}
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		cout << a[n] << endl;
	}
}
