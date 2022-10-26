#include<iostream>
using namespace std;

main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[10] ={};
        int sum = 0;
        for(int i = 0; i < n; i++){
            int temp; cin >> temp;
            arr[temp]++;
            sum += temp;
        }
        bool check = true;
        if(sum%3 == 1){
            if(arr[1] > 0) arr[1]--;
            else if(arr[4] > 0) arr[4]--;
            else if(arr[7] > 0) arr[7]--;
            else check = false;
        }
        else if(sum%3 == 2){
            if(arr[2] > 0) arr[2]--;
            else if(arr[5] > 0) arr[5]--;
            else if(arr[8] > 0) arr[8]--;
            else check = false;
        }
        if(!check) cout << -1;
        else{
            int k = 10;
            while(k--)
                while(arr[k]--)
                    cout << k;
        }
        cout << endl;
    }
}
