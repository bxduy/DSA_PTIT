#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n; cin >> n; int a[n];
	for(int &x : a) cin >> x;
	int l, r;
	for(int i = 0; i < n-1; i++){
		if(a[i] > a[i+1]){
			l = i;
			break;
		}
	}
	for(int i = n-1; i > 0; i--){
		if(a[i] < a[i-1]){
			r = i;
			break;
		}
	}
	int min = *min_element(a+l, a+r+1);
	int max = *max_element(a+l, a+r+1);
	for(int i = 0; i <= l; i++) if(a[i] > min) {l = i+1;break;
	}
	for(int i = n-1; i >=r; i--) if(a[i] < max){r = i+1;break;
	}
	cout << l << " " << r << endl;
}
main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}
