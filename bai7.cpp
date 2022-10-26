#include<bits/stdc++.h>
using namespace std;
vector<string> v;
void solve(){
	queue<string> q;
	q.push("4"); q.push("7");
	while(v.size() <1000){
		string s = q.front();
		q.pop();
		v.push_back(s);
		q.push(s + "4");
		q.push(s + "7");
	}
}
main(){
	solve();
	
	vector<int> vv;
	for(string x : v)vv.push_back(stoi(x));
	
		int a, b;
		cin >> a >> b;
		long long s = 0;
		int x = lower_bound(vv.begin(), vv.end(), a) - vv.begin();
		s += vv[x];
		for(int i = a + 1; i <= b; i++){
			if(i <= vv[x]) s += vv[x];
			else{ 
				x++;
				s += vv[x];
			}
		}
		cout << s << endl;
	
}
