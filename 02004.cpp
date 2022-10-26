#include<bits/stdc++.h>
using namespace std;
int a[20][20], n;
bool ok;
char b[1000];
void nhap(){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++) cin >> a[i][j];
    }
}
void Try(int i, int j, int k){
    if(i == n && j == n){
        
        
        for(int i = 1; i < k; i++){
            cout << b[i] ;
        }
       
       cout << " ";
        ok = true;
        return;
    }
    if(i+1 <= n && a[i+1][j]){
        a[i+1][j] = 0;
        b[k] = 'D';
        Try(i+1, j, k+1);
        a[i+1][j] = 1;
    }
    if(j-1 >= 1 && a[i][j-1]){
        a[i][j-1] = 0;
        b[k] = 'L';
        Try(i, j-1, k+1);
        a[i][j-1] = 1;
    }
    if(j+1 <= n && a[i][j+1]){
        a[i][j+1] = 0;
        b[k] = 'R';
        Try(i, j+1, k+1);
        a[i][j+1] = 1;
    }
    if(i-1 >= 1 && a[i-1][j]){
        a[i-1][j] = 0;
        b[k] = 'U';
        Try(i-1, j, k+1);
        a[i-1][j] = 1;
    }
    
    
}
main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        ok = false;
        nhap();
        if(a[1][1] && a[n][n]){
                Try(1,1,1);
        }
        if(ok) cout << endl;
        else cout << -1 << endl;
    }
}
