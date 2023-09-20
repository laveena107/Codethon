#include <stdio.h>

int main() {
    int ini = 100;
    int ini_p = 500;
    int op_cost = 10000;
    int adv_b = 1000;
    int in_f = 2;
    int sales = 20;
    int net_p;
    int month = 0;

    printf("Month \t Sales \t Advertising Budget \t Net Profit \n");

    while (1) {
        int current_sales = ini * (100 + sales) / 100;
        net_p = current_sales * (ini_p - adv_b) - op_cost;

        printf("%d\t%d\t%d\t%d\n", month, current_sales, adv_b, net_p);

        if (net_p < 0) {
            break;
        }
        adv_b *= in_f;
        month++;
    }

    printf("Net profit decline after %d months.\n", month);

    return 0;}