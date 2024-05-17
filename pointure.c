#include <stdio.h>

int main() {
    int size;
    printf("Type a size for array : ");
    scanf("%d", &size);
    int arr[size];
    int *p;
    p = arr;
    int accumulate = 0;
    for (p = arr; p < arr + size; p++) {
        printf("\nType a number for arr[%d] = ", p - arr); // <-- Issue here
        scanf("%d", p);
        accumulate += *p;
    }
    printf("\naccumulate  = %d", accumulate);
    return 0;
}
