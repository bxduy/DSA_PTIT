#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n; cin >> n;
	int a[n], res[n];
	stack<int> st;
	st.push(-1); st.push(0);
	for(int i = 0; i < n; i++){
		cin >> a[i];
		res[i] = 1;
	}
	for(int i = 1; i < n; i++){
		while(st.top() != -1 && a[st.top()] <= a[i]) st.pop();
		res[i] = i - st.top();
		st.push(i);
	}
	for(int x : res) cout << x << " ";
	cout << endl;
}
main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}
