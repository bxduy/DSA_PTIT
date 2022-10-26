#include<bits/stdc++.h>
using namespace std;
int a[20], b[20], n;
bool ok;
void Init(){
	for(int i = 1; i <= n; i++) a[i] = i;
}
void next(){
	int i = n-1;
	while(i >= 1 && a[i] > a[i+1]) i--;
	if(i == 0) ok = false;
	else{
		int j = n;
		while(a[i] > a[j]) j--;
		swap(a[i], a[j]);
		sort(a+i+1, a+n+1);
	}
}
main(){
	cin >> n;
	Init();
	ok = true;
	for(int i = 1; i <= n; i++) cin >> b[i];
	sort(b+1 , b+n+1);
	while(ok){
		for(int i = 1; i <= n; i++) cout << b[a[i]] << " ";
		cout << endl;
		next();
	}
}
