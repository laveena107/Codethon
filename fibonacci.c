#include <stdio.h>
void Fibonacci(int x);
int main() {
    int x;
    printf("Enter No. of Fibonacci numbers : ");
    scanf("%d", &x);
    Fibonacci(x);
    return 0;}
void Fibonacci(int x) {
    if (x<=0) {
        printf("Invalid input\n");
        return;}
    if (x==1) {
        printf("Fibonacci Series : \n");
        return;}
    if (x==2) {
        printf("Fibonacci Series : \n");
        return;}
    int f=0, s=1,next,a;
    printf("Fibonacci Series : %d %d", f, s);

    for (a = 3; a <= x; ++a) {
        next = f + s;
        printf(" %d", next);
        f = s;
        s = next;
    }
    printf("\n");}
