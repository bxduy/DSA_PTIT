#include<bits/stdc++.h>
using namespace std;
long long a[505] = {0};
bool ok;
vector<long long> v;
void next(string &s){
	int i = s.size() - 1;
	while(i >= 0 && s[i] == '9'){
		s[i] = '0';
		i--;
	}
	if(i == -1) ok = false;
	else{
		s[i] = '9';
	}
}
void Init(){
	ok = true;
	string s = string(13, '0');
	next(s);
	while(ok){
		v.push_back(stoll(s));
		next(s);
	}
	for(int i = 1; i <= 500; i++){
		if(!a[i]){
			for(long long x : v){
				if(x % i == 0){
					a[i] = x;
					break;
				}
			}
		}
	}
}
main(){
	Init();
	int t; cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << a[n] << endl;
	}
}
