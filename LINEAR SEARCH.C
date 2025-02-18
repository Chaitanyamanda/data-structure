
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ele, found = 0;

    printf("Enter the element to search: ");
    scanf("%d", &ele);

    for (int i = 0; i < n; i++) {
        if (arr[i] == ele) {
            printf("Element %d found at position: %d\n", ele, i);
            found = 1;
            break; 
        }
    }

    if (!found) {
        printf("Element %d not found in the array.\n", ele);
    }

    return 0;
}
