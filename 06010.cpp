#include<bits/stdc++.h>
using namespace std;
main(){
	int t, n; cin >> t;
	while(t--){
		cin >> n; cin.ignore();
		string s; getline(cin, s);
		int a[10]={0};
		for(char x : s){
			if(isdigit(x)) a[x-'0']=1;
		}
		for(int i = 0; i < 10; i++){
			if(a[i]!= 0) cout << i << " ";
		}
		cout << endl;
	}
}
