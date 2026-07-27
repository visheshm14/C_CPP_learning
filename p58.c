#include <stdio.h>

void read(int[]);
void greatest(int[]);

void main() {
    int a[5];
    read(a);
    greatest(a);
}

void read(int b[]) {
    int i;
    printf("Enter values of the array:\n");
    for (i = 0; i < 5; i++) 
    {
        scanf("%d", &b[i]);
    }
}

void greatest(int a[]) {
    int max = a[0], i;
    for (i = 1; i < 5; i++) 
    {
        if (a[i] > max) 
            max = a[i];
    }
    printf("Greatest is %d\n", max);
}