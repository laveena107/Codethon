#include <stdio.h>
int main() {
    int x;
    printf("Enter the amount (Rupees):");
    scanf("%d", &x);
    int denom[] = {100, 50, 10, 5, 2, 1};
    int Ncount[6] = {0};

    for (int a = 0; a < 6; a++) {
        Ncount[a] = x / denom[a];
        x %= denom[a];}
    for (int a = 0; a < 6; a++) {
        if (Ncount[a] > 0) {
            printf("Rupees %d notes: %d\n", denom[a], Ncount[a]); } }
    int Notes = 0;
    for (int a = 0; a < 6; a++) {
        Notes += Ncount[a];}
    printf("No. of notes: %d\n",Notes);
    return 0;
}
