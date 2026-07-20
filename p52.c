#include <stdio.h>

int e();

int main() {
    int a, b;
    b= e();
    printf("a is %d\n", b);
    
    return 0;
}

int e() {
    int a, b,temp;
    printf("Enter value of a and b: ");
    scanf("%d%d", &a, &b);
    
    temp = a;
    a = b;
    b = temp;
    return a;
}

