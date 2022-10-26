#include<bits/stdc++.h>
using namespace std;
long long n;string s;
long long Try(long long l){
	if(n <= s.size()) return n-1;
	if(n > l/2) n = n-l/2-1;
	if(n==0) n = l/2;
	return Try(l/2);
}
main(){
	int t; cin >> t;
	while(t--){
		 cin >> s >> n;
		long long l = s.size();
		while(l < n) l *= 2;
		cout << s[Try(l)] << endl;
	}
}
