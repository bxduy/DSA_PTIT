#include<bits/stdc++.h>
using namespace std;
main(){
	int n; cin >> n;
	int a[n+1][n+1] = {0};
	cin.ignore();
	for(int i = 1; i <= n; i++){
		string s, tmp; getline(cin, s);
		stringstream ss(s);
		while(ss >> tmp){
			int k = stoi(tmp);
			a[i][k] = 1;
		}
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++) cout << a[i][j] << " ";
		cout << endl;
	}
}
