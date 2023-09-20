#include <stdio.h>

void Sort(int ar[], int x) {
    int t, swap;
    do {
        swap = 0;
        for (int i = 0; i < x - 1; i++) {
            if (ar[i] > ar[i + 1]) {
                t = ar[i];
                ar[i] = ar[i + 1];
                ar[i + 1] = t;
                swap = 1;  }  }
    } while (swap);}
int main() {
    int x;
    printf("Enter no. of  elements: ");
    scanf("%d", &x);

    int ar[x];
    printf("Enter the array elements:\n");
    for (int i = 0; i < x; i++) {
        scanf("%d", &ar[i]);
    }
    int even[x], odd[x];
    int evenc = 0, oddc = 0;

    for (int i = 0; i < x; i++) {
        if (ar[i] % 2 == 0) {
            even[evenc++] = ar[i];
        } else {
            odd[oddc++] = ar[i];   } }
    Sort(even, evenc);
    Sort(odd, oddc);
    int in = 0;
    for (int i = 0; i < evenc; i++) {
        ar[in++] = even[i];}
    for (int i = 0; i < oddc; i++) {
        ar[in++] = odd[i];}
    printf("Sorted array :\n");
    for (int i = 0; i < x; i++) {
        printf("%d ", ar[i]);}
    printf("\n");
    return 0;
}
