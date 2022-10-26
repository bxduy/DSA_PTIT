#include<bits/stdc++.h>
using namespace std;
int a[50], k, n;
set<string> v;
string b[50];
void in(){
    for(int i = 1; i <= k; i++){
        cout << b[a[i]] << " ";
    }
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
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        string s; cin >> s;
        v.insert(s);
    }
    int m = 1;
    for(string x : v) b[m++] = x;
    n = m-1;
    Try(1);
}