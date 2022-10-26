#include<bits/stdc++.h>
using namespace std;
int a[1005], n, k, cnt, b[1005];
set<int> s;
bool ok;
void Init(){
	for(int i = 1; i <= k; i++) a[i] = i;
}
void next(){
	int i = k;
	while(i >= 1 && a[i] == cnt-k+i) i--;
	if(i == 0) ok = false;
	else{
		a[i]++;
		for(int j = i+1; j <= k; j++) a[j] = a[j-1] + 1;
	}
}
main(){
	
	cin >> n >> k;
	Init();
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		s.insert(x);
	}
	cnt = s.size();
	int m = 1;
	for(int x : s) b[m++] = x;
	ok = true;
	//for(int j = 1; j <= cnt; j++) cout << b[j] << " ";
	while(ok){
		for(int i = 1 ; i <= k; i++){
			cout << b[a[i]] << " ";
		}
		cout << endl;
		next();
	}
}
