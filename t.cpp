#include<bits/stdc++.h>
using namespace std;
void printxy(int x, int y) {
 int *ptr;
 x = 0;
 ptr = &x;
 y = *ptr;
 *ptr = 1;
 printf("%d,%d", x, y); }
int main() {
 printxy(1,1);
 return 0; }
