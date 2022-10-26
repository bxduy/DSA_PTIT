#include<bits/stdc++.h>
using namespace std;
int sswap(int *a, int *b) {
*a = *a + *b;
*b = *a 
- *b;
*a = *a 
- *b;
}
int main() {
int x = 5, y = 10; 
sswap(&x, &y);
printf("%d %d\n", x, y);
return 0;
}
