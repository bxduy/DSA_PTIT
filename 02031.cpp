#include<bits/stdc++.h>
using namespace std;
int a[20], n;
bool check[20];
void in(){
    for(int i = 1; i <= n; i++) cout << (char)(a[i] + 64);
    cout << endl;
}
bool kt(){
    if( n < 5 ){
    	if((a[1] == 1 || a[4] == 1))  return true;
	}
    else{
        if((a[1] == 1 && a[n] == 5) || (a[1] == 5 && a[n] == 1))return true;
        else
        for(int i = 1; i < n; i++){
            if(a[i] == 1  && (a[i-1] == 5 || a[i+1] == 5)) return true;
            if(a[i] == 5  && (a[i-1] == 1 || a[i+1] == 1)) return true;
        }
    }
    return false;
}
void ql(int i){
    for(int j = 1; j <= n; j++){
        if(check[j]){
            check[j] = false;
            a[i] = j;
            if(i == n){
                if(kt()) in();
            }
            else ql(i+1);
            check[j] = true;
        }
    }
}
main(){
    char c; cin >> c;
    n = c-'A'+1;
    memset(check, true, sizeof(check));
    ql(1);
}
