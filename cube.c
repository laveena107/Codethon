#include <stdio.h>
int main() {
int x;
long c = 1;
printf("Enter no. : ");
scanf("%d", &x);
for (int y = 1;y<=3; y++) {
c = c * x;}
printf("cube of %d = %ld\n",x,c);
return 0;}