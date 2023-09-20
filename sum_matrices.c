#include <stdio.h>
int main() {
    int m1[2][2], m2[2][2], ans[2][2];
    printf("Enter elements for matrix 1 :\n");
    for (int x = 0; x < 2; x++) {
        for (int y = 0; y < 2; y++) {
            scanf("%d", &m1[x][y]);} }
 printf("Enter elements of matrix 2 :\n");
    for (int x = 0; x < 2; x++) {
        for (int y = 0; y < 2; y++) {
            scanf("%d", &m2[x][y]); }}
    for (int x = 0; x < 2; x++) {
        for (int y = 0; y < 2; y++) {
            ans[x][y] = m1[x][y] + m2[x][y];} }
    printf("Sum of matrices:\n");
    for (int x = 0; x < 2; x++) {
        for (int y = 0; y < 2; y++) {
            printf("%d ", ans[x][y]);}
        printf("\n"); }
    return 0;}
