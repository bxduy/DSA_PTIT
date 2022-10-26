#include<bits/stdc++.h>
using namespace std;
int n, sum;
vector<int> v;
bool ok = false;
void ql(int i, int k, int s){
	if(ok) return;
	for(int j = i; j <= n-k+i;j++){
		if(s + v[j] <= sum){
			s += v[j];
			if(i == k-1){
				if(s == sum){
					ok = true;
					return;
				}
			}else ql(i+1, k, s);
			s -= v[j];
		}
	}
}
main(){
	cin >> n >> sum;
	int mp, res = -1;
	for(int i = 0; i < n; i++){
		cin >> mp;
		if(mp == sum) ok = true;
		else if(mp < sum)
		v.push_back(mp);
	}
	if(ok) cout << 1 ;
	else{
	    sort(v.begin(), v.end(), greater<int>());
	for(int i = 1; i <= v.size(); i++){
		ql(0, i, 0);
		if(ok){
			res = i;
			break;
		}
	}
	cout << res;
	}
}
