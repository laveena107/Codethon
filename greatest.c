#include<stdio.h>    
int main(){
    int a, b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    int res = (a > b) ? a : b;
    printf("The gtreatest number is: %d",res);
    return 0;
}