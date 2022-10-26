#include<bits/stdc++.h>

using namespace std;

int main() {
	ifstream ifs;
	ifs.open("dsc.txt");
	int n, m;
	ifs >> n >> m;
	int mtk[n + 1][n + 1] = {0};
	for(int i = 0; i < m; i++){
		int x, y;
		ifs >> x >> y;
		mtk[x][y] = 1;
		mtk[y][x] = 1;
	}
	cout << n << endl;
	for(int i = 1; i <= n; i++){
		for(int j = 1;j <= n; j++)
			cout << mtk[i][j] << " ";
		cout << endl;
	}
}
