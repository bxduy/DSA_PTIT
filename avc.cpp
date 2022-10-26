#include<bits/stdc++.h>
using namespace std;
main(){
	int a, b, c;
	for(a = 1; a <= 9; a++)
	for(b = 1; b <= 9; b++)
	for(c = 1; c <= 9; c++)
	if(a*b*c == a+b+c) cout << a <<" " << b << " " << c;
}
