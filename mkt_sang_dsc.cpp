#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	ifstream fp;
	fp.open("mtk.txt");
	fp >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			int x; fp >> x;
			if(x && i < j){
				cout << i << " " << j << endl;
			}
		}
	}
}
