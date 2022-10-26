#include<bits/stdc++.h>
using namespace std;
int a[100], n, res = 1e9;
string s[100];
bool used[100];
void inp(){
	cin >> n;
	for(int i = 1; i <= n; i++) cin >> s[i];
	memset(used, false, sizeof(used));
}
void ql(int i){
	for(int j = 1; j <= n; j++){
		if(!used[j]){
			used[j] = true;
			a[i] = j;
			if(i == n){
				int cnt = 0;
				for(int k = 2; k <= n; k++){
					int i1=0, i2=0;
					while(i1 < s[a[k-1]].size() && i2 < s[a[k]].size()){
						if(s[a[k-1]][i1] == s[a[k]][i2]){
							cnt++; 
							i1++; i2++;
						}else if(s[a[k-1]][i1] < s[a[k]][i2]) i1++;
						else i2++;
					}
				}
				res = min(cnt, res);
			}else ql(i+1);
			used[j] = false;
		}
	}
}
main(){
	inp();
	ql(1);
	cout << res;
}
