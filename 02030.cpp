#include<bits/stdc++.h>
using namespace std;
int a[50], k, n;
void in(){
    for(int i = 1; i <= k; i++) cout << (char)(a[i] + 64);
    cout << endl;
}
void Try(int i){
    for(int j = a[i-1] + 1; j <= n-k+i; j++){
        a[i] = j;
        if(i == k) in();
        else Try(i+1);
    }
}
main(){
    char c; cin >> c >> k;
    n = c - 'A' + 1;
    cout << n;
    Try(1);
}