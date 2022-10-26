#include<bits/stdc++.h>
using namespace std;
int n;
string s;
void ql(string s){
	if(n == s.size()){
		for(int i = 0; i < n; i++){
			cout << s[i] << " ";
		}
		cout << endl;
		return;
	}
	if(s.size() == 0||s[s.size()-1] == '1') ql(s + '0');
	if(s.size() == 0||s[s.size()-1] == '0') ql(s + '1');
}
main(){
	cin >> n;
	ql(s);
}
