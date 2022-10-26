#include<bits/stdc++.h>
using namespace std;
int ans = INT_MAX;
vector<string> s;
vector<int>v;
bool check[10] ;
int n, k;
int find(){
	
}
void ql(int i){
	for(int j = 1; j <= k; j++){
		if(check[j]){
			check[j] = false;
			v.push_back(j);
			if(i == k){
				int minn = INT_MAX, maxx = INT_MIN;
				for(int i = 0; i < n; i++){
					int sum = 0;
					for(int x : v){
						sum = sum*10 + (s[i][x-1]-'0');
					}
					minn = min(minn, sum);
					maxx = max(maxx, sum);
				}
				ans = min(ans, maxx-minn);
			}else ql(i+1);
			v.pop_back();
			check[j] = true;
		}
	}
}
main(){
	memset(check, true, sizeof(check));
	cin >> n >> k;
	for(int i = 0; i < n; i++){
		string ss;
		cin >> ss;
		s.push_back(ss);
	}
	ql(1);
	cout << ans;
}
