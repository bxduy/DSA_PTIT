#include<bits/stdc++.h>
using namespace std;
int a[20], n, check[20];
void in(){
    for(int i = 1; i <= n; i++){
        cout << (char)(a[i] + 64);
    }
    cout << " ";
}
void Try(int i){
    for(int j = 1; j <= n; j++){
        if(check[j]){
            a[i] = j;
            check[j] = 0;
            if(i == n)in();
            else Try(i+1);
            check[j] = 1;
        }
    }
}
main(){
    int t; cin >> t;
    while(t--){
        memset(check, 1, sizeof(check));
        string s;
        cin >> s;
        n = s.size();
        Try(1);
        cout << endl;
    }
}