#include<bits/stdc++.h>
using namespace std;
int x[20], d1[100], d2[100], cot[100], cnt, n, a[20][20];
void Try(int i){
    for(int j = 1; j <= n; j++){
        if(cot[j] && d1[i-j+n] && d2[i+j-1]){
            x[i] = j;
            cot[j] = 0; d1[i-j+n] = 0; d2[i+j-1] = 0;
            if(i == n) {
            	int sum = 0;
            	for(int k = 1; k <= n; k++){
            		sum += a[k][x[k]];
				}
				cnt = max(cnt, sum);
			}
            else Try(i+1);
            cot[j] = 1; d1[i-j+n] = 1; d2[i+j-1] = 1;
        }
    }
}
main(){
    int t; cin >> t;
    while (t--)
    {
        for(int i = 0; i < 100; i++) cot[i] = d1[i] = d2[i] = 1;
        n=8;
        for(int i = 1; i <= n; i++){
        	for(int j = 1; j <= n; j++) cin >> a[i][j];
		}
        cnt = 0;
        Try(1);
        cout << cnt << endl;
    }
    
}
