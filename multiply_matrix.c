#include <stdio.h>
int main() {
    int m1[3][3], m2[3][3], ans[3][3];
    int i, j, k;
    printf("Enter elements of matrix 1 :\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &m1[i][j]);
        }
    }
    
    printf("Enter elements of matrix 2:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &m2[i][j]);
        }
    }
    
    int possible = 1;
    for(i = 0; i < 3; i++) {
        if(m1[i][0] != m2[0][i]) {
            possible = 0;
            break;
        }
    }
    
    if(possible) {
        for(i = 0; i < 3; i++) {
            for(j = 0; j < 3; j++) {
                ans[i][j] = 0;
                for(k = 0; k < 3; k++) {
                    ans[i][j] += m1[i][k] * m2[k][j];
                }
            }
        }
        printf("Result :\n");
        for(i = 0; i < 3; i++) {
            for(j = 0; j < 3; j++) {
                printf("%d ", ans[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Not possible.\n");
    }

    return 0;
}