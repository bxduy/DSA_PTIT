#include<bits/stdc++.h>
using namespace std;
int a[100], n, k;
bool ok;
void next(){
	int i = k;
	while(i >= 1 && a[i] == n-k+i) i--;
	if(i == 0){
		ok = true;
		return;
	}
	a[i]++;
	for(int j = i+1; j <= k; j++){
		a[j] = a[j-1] + 1;
	}
}
main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		set<int> s;
		for(int i = 1; i <= k; i++){
			cin >> a[i];
			s.insert(a[i]);
		}
		ok = false;
		next();
		if(ok){
			cout << k << endl;
		}else{
			int ans  = 0;
			for(int i = 1 ; i <= k; i++){
				if(s.find(a[i]) == s.end()) ans++;
			}
			cout << ans << endl;
		}
	}
}
