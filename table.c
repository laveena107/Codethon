#include <stdio.h>
int main() {
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    printf("Multiplication table for %d:\n", num);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}