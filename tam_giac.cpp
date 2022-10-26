#include<bits/stdc++.h>
using namespace std;
void solve(long long a[], int n){
		long long b[n];
		sort(a, a+n);
		for(int i = 0; i < n; i++) b[i] = a[i] * a[i];
		long long nhon = 0, vuong = 0, tu = 0;
		for(int i = 0; i < n-2; i++){
			int l = i+1, r = i+1;
			for(int j = i+1; j < n-1; j++){
				while(l < n-1 && b[i] + b[j] >= b[l+1]) l++;
				r = max(l, r);
				while(r < n-1 && a[i] + a[j] > a[r+1]) r++;
			
				if(b[i] + b[j] == b[l]){
					nhon += max(0, l-j-1);
					vuong++;
					tu += r-l;
				}else{
					nhon += max(0, l-j);
					tu += r-l;
				}
			}
		}
		cout << nhon << " " << vuong << " " << tu;
	}
main(){
	long long n; cin >> n;
	long long a[n];
	for(long long &x : a) cin >> x;
	solve(a, n);
}
