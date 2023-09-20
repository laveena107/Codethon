#include <stdio.h>
int Prime(int n) {
    if (n <= 1) {
        return 0; 
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
int main() {
    int s, e;
    printf("Enter the start of the range: ");
    scanf("%d", &s);
    printf("Enter the end of the range: ");
    scanf("%d", &e);

    printf("Prime numbers between %d and %d are:\n", s, e);
    for (int i = s; i <= e; i++) {
        if (Prime(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
