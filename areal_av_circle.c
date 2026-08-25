
#include <stdio.h>

#define PI 3.14159265358979323846

int main() {
    double radian, areal;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radian);

    if (radian <= 0.0) {
        printf("The radius of the circle is more than zero.\n");
        return 1;
    }

    areal = PI * radian * radian;
    printf("The area of the circle is %.2f\n", areal);
    return 0;
}
