#include<bits/stdc++.h>
using namespace std;
int n, k, ans = INT_MAX, a[20];
int check[20];
vector<string> v;
vector<int> vv;
void sl(){
	int m1 = INT_MAX, m2=INT_MIN;
	for(int i = 0; i < n; i++){
		int s = 0;
		for(int j = 1; j <= k; j++){
			s = s*10 + (v[i][a[j]-1]-'0');
		}
		m1 = min(m1, s);
		m2 = max(m2, s);
	}
	ans = min(ans, m2-m1);
}
void ql(int i){
	for(int j = 1; j <= k; j++){
		if(!check[j]){
			check[j] = 1;
			a[i] = j;
			if(i == k)sl();
			else ql(i+1);
			
			check[j] = 0;
		}
	}
}
main(){
	cin >> n >> k;
	memset(check, 0, sizeof(check));
	string str;
	for(int i = 0; i < n; i++){
		cin >> str;
		v.push_back(str);
	}
	ql(1);
	cout << ans;
}
