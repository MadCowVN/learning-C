#include<stdio.h>

int main(void) {
    int number = 5;

    printf("Multi table %d\n", number);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d=%d", number, i , number * i);
    }
    return 0;
}