#include <bits/stdc++.h>
using namespace std;
int n, a[20], b[20], cnt, sum ;


void in(){
    vector<int> x;
    for(int i = 1; i <= n; i++){
        if( a[i] == 0) {
            x.push_back(b[i]);
        }
    }
    cout << "[";
    for(int i = 0; i < x.size(); i++){
        cout << x[i];
        if(i != x.size()-1) cout << " ";
    }
    cout << "]";
    cout << " ";
}
bool check(){
    int s = 0;
    for(int i = 0; i <= n; i++) if(a[i] == 0) s += b[i];
    return s == sum;
}
void Try(int i){
    for(int j = 0; j < 2; j++){
        a[i] = j;
        if(i == n){
            if(check()){
                cnt++;
                in();
            }
        }else Try(i+1);
    }
}
main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> sum;
        cnt = 0;
        for(int i = 1; i <= n; i++) cin >> b[i];
        sort(b+1, b+n+1);
        Try(1);
        if(cnt == 0) cout << -1;
        cout << endl;
    }
}