#include <stdio.h>
double Sub(double x, double y) {
    return (x-y);
}
int Sum(int x,int y){
    return (x+y);
}
int main() {
    double a=3.4,b=1.2;
    int c=7,d=10;
    double sub = Sub(a, b);
    int sum = Sum(c,d);
    printf("Subtraction of float numbers: %.2lf\n", sub);
    printf("Sum of integer numbers : %d",sum);
    return 0;
}
