//
// Created by Admin on 8/24/2026.
//

#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    printf("Enter celsius: ");
    scanf("%f", &celsius);

    fahrenheit = celsius * 9.0/5.0 + 32.0;
    printf("The fahrenheit is %.2f\n", fahrenheit);

    printf("%.2f celsius is %.2f\n", celsius, fahrenheit);

    return 0;
}