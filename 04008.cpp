#include <iostream>
using namespace std;

int mod = 1e9+7;
struct Mat{
    long long f[2][2];
};

Mat operator*(Mat A, Mat B){
    Mat C; int i,j,k;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            C.f[i][j] = 0;
            for(k=0;k<2;k++) {
            	C.f[i][j] = (C.f[i][j] + A.f[i][k]*B.f[k][j]%mod)%mod;
			}
        }
    }
    return C;
}

Mat powMod(Mat A, int n){
    if(n==1) return A;
    Mat X = powMod(A, n/2);
    if(n%2==0) return X*X;
    return A*X*X;
}

main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        Mat A;
        A.f[0][0] = 1; A.f[0][1] = 1; A.f[1][0] = 1; A.f[1][1] = 0;
        Mat KQ = powMod(A, n);
        cout << KQ.f[1][0] << endl;
    }
}
