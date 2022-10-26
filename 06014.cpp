#include<bits/stdc++.h>
using namespace std;
bool prime[1000001] ;
void sangnt(){
	memset(prime, true, sizeof(prime));
	prime[0] = prime[1] = false;
	for(int i = 2; i <= sqrt(1000000); i++){
		if(prime[i]){
			for(int j = i*i; j <= 1000000; j += i)
				prime[j] = false;
		}
	}
}
main(){
	int t; cin >> t;
	sangnt();
	while(t--){
		int n; cin >> n;
		bool check  = false;
		for(int i = 0; i <= n/2; i++){
			if(prime[i] && prime[n-i]){
				cout << i << " " << n-i << endl;
				check = true; break;
			}
		}
		if(!check) cout << "-1" << endl;
	}
}
