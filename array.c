// #include <stdio.h>
// #define ARRAY_SIZE 100
//
// int main() {
//     int n;
//     printf("Enter (N): ");
//     scanf("%d", &n);
//     int arr[ARRAY_SIZE];
//
//     // Enter each element/ i run from 0 to n - 1
//     for (int i = 0; i < n; i++) {
//         printf("arr[%d] = ", i);
//         scanf("%d", &arr[i]); // storage i
//     }
//
//     // Print to test
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
//     return 0;
// }
#include <stdio.h>

int main() {
    int arr[] = {12, 45, 23, 67, 34, 89, 56};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }

    printf("Max: %d, Min: %d\n", max, min);
    return 0;
}
