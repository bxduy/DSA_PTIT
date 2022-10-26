#include<bits/stdc++.h>
using namespace std;
int x[20], d1[100], d2[100], cot[100], ans = 0, n, a[20][20];
void Try(int i){
    for(int j = 1; j <= 8; j++){
        if(cot[j] && d1[i-j+8] && d2[i+j-1]){
            x[i] = j;
            cot[j] = 0; d1[i-j+8] = 0; d2[i+j-1] = 0;
            if(i == 8){
                int sum = 0;
                for(int k = 1; k <= 8; k++){
                    sum += a[k][x[k]];
                }
                ans = max(ans, sum);
                //cout << sum << endl;
            }
            else Try(i+1);
            cot[j] = 1; d1[i-j+8] = 1; d2[i+j-1] = 1;
        }
    }
}
main(){
    int t; cin >> t;
    while (t--)
    {
        for(int i = 0; i < 100; i++) cot[i] = d1[i] = d2[i] = 1;
        ans = 0;
        for(int i = 1; i <= 8; i++) for(int j = 1; j <= 8; j++) cin >> a[i][j];
        Try(1);
        cout << ans << endl;
    }
    
}
