#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m;
	int a[1000][1000] ={0};
	ifstream fp;
	fp.open("dsc.txt");
	fp >> n >> m;
	for(int i = 0; i < m; i++){
		int x, y; 
		fp >> x >> y;
		a[x][y] = a[y][x] = 1;
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
