#include<bits/stdc++.h>
using namespace std;
int a[20], n;
char c;
void in(){
	for(int i = 1; i <= n; i++){
		if(a[i] == 1) cout << "X";
		else cout << "O";
	}
	cout << endl;
}
int check(){
	int d1 = 0, d2 = 0, m1 = INT_MIN, m2 = INT_MIN;
	for(int i = 1; i <= n; i++){
		if(a[i]){
			d2 = 0;
			d1++;
			m1 = max(d1, m1);
		}
		else{
			d1 = 0;
			d2++;
			m2 = max(d2, m2);
		}
	}
	if(m1 > m2 && m1 >= 5) return 1;
	if(m2 > m1 && m2 >= 5) return 2;
	return 0;
}
void ql(int i){
	for(int j = 0;j < 2; j++){
		a[i] = j;
		if(i == n){
			int k = check();
			if(c == 'X'){
				if(k == 1){
					in();
				}
			}else{
				if(k == 2) in();
			}
		}else ql(i+1);
	}
}
main(){
	int t; cin >> t;
	while(t--){
		cin >> n ;
		cin.ignore();
		cin >> c;
		ql(1);
	}
}
