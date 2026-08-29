// deletion of element in array
#include <stdio.h>
void main() {
    int pos, n, a[10];

    printf("Enter the position to delete: ");
    scanf("%d", &pos);

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the values of the array: ");
    for(int i = 0; i < n; i++) {

        
        scanf("%d", &a[i]);
    }

    
    if(pos > n || pos <= 0) {
        printf("invalid position\n");
    } else {
        
        for(int i = pos - 1; i < n - 1; i++) {
            a[i] = a[i + 1];
        }

        n--; 

        printf("Array after deletion: ");
        for(int i = 0; i < n; i++) {
            printf("%d\n", a[i]);
        }
    }
}
