#include <stdio.h>

int main() {
    int n;
    printf("Enter (N): ");
    scanf("%d", &n);

    int arr[n]; // (VLA - C99)

    // Enter each element/ i run from 0 to n - 1
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]); // storage i
    }

    // Print to test
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
