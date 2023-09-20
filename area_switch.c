#include <stdio.h>
int main() {
    int n;
    double area;
    printf("enter a choice to calculate area:\n11: Circle\n22: Rectangle\n33: Square\n44: Triangle\n");
    scanf("%d", &n);
    switch (n) {
        case 11:
            {
                double r;
                printf("Enter the radius circle: ");
                scanf("%lf", &r);
                area = 3.14* r * r;
                printf("Area : %.2lf\n", area);
                break;
            }
        case 22:
            {
                double l, b;
                printf("Enter the length and breadth: ");
                scanf("%lf %lf", &l, &b);
                area = l * b;
                printf("Area of the rectangle: %.2lf\n", area);
                break;
            }
        case 33:
            {
                double s;
                printf("Enter the side : ");
                scanf("%lf", &s);
                area = s * s;
                printf("Area of the square: %.2lf\n", area);
                break;
            }
        case 44: 
            {
                double b, h;
                printf("Enter the base and height : ");
                scanf("%lf %lf", &b, &h);
                area = 0.5 * b * h; // (1/2) * base * height
                printf("Area of the triangle: %.2lf\n", area);
                break;
            }
        default:
            printf("Invalid Input\n");
            break;
    }

    return 0;
}
