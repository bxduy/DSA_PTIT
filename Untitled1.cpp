#include<bits/stdc++.h>
using namespace std;
long long fibo_arr(int n){
	vector<long long> v;
	v.push_back(0); 
	v.push_back(1);
	for(int i = 2; i <= n; i++){
		long long next = v[i-1] + v[i-2];
		v.push_back(next);
	}
	return v[n];
}
long long fibo(int n){
	if(n < 2)
		return n;
	return fibo(n-1) + fibo(n-2);
}
long long fib(int n){
	if(n < 2) 
		return n;
	long long a =0, b = 1, c;
	for(int i = 2; i <= n; i++){
		c = a + b;
		a = b; 
		b = c;
	}
	return c;
}
main(){
	int n; cin >> n;
	cout << fibo_arr(n) << endl;
	cout << fib(n) << endl;
	cout << fibo(n) << endl;
}
