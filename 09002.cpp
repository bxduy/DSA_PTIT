#include<bits/stdc++.h>
using namespace std;
main(){
	int n; cin >> n;
	cin.ignore();
	vector<pair<int, int>> v;
	for(int i = 1; i <= n; i++){
		string s, tmp; getline(cin, s);
		stringstream ss(s);
		while(ss >> tmp){
			int k = stoi(tmp);
			if(k > i){
				v.push_back({i, k});
			}
		}
	}
	for(auto x : v){
		cout << x.first << " " << x.second << endl;
	}
}
