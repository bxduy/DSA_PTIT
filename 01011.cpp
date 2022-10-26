#include<bits/stdc++.h>
using namespace std;
bool ok=false;
 
void next(string &s){
	int i=s.length()-2;
	while(i>=0 && s[i]>=s[i+1]){
		--i;
	}
	if(i==-1){
		ok=true;//biggest
	}
	else{
		int j=s.length()-1;
		while(s[i]>=s[j]){
			--j;
		}
		swap(s[i],s[j]);
		sort(s.begin()+i+1,s.end());
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		int tc;string s;
		cin>>tc>>s;
		ok=false;
		next(s);
		if(ok){
			cout<<tc<<" BIGGEST\n";
		}
		else cout<<tc<<" "<<s<<endl;
	}
}
