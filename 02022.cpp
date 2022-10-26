#include<bits/stdc++.h>
using namespace std;
int a[10], n = 8;
void in(){
    for(int i = 1; i <= n; i++){
        if(i == 3 || i == 5){
            cout << "/" ;
            if(a[i] == 0) cout << 0;
            else cout << 2;
        }else {
            if(a[i] == 0) cout << 0;
            else cout << 2;
        }
    }
    cout << endl;
}
void Try(int i){
    for(int j = 0; j < 2; j++){
        a[i]= j;
        if(i == n){
            if(a[5] == 1 && a[3] != 1 && a[4] != 0 && a[1] + a[2] != 0)in();
        }else Try(i+1);
    }
}
main(){
    Try(1);
}