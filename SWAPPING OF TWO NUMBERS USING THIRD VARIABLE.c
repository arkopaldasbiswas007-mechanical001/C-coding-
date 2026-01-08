#include <stdio.h>
int main() {
    int a, b, value;
    printf("Please Enter two numbers:\n");
    scanf("%d %d", &a, &b);
    value = a;
    a = b;
    b = value;
    printf("After swapping the values will be:\n");
    printf("a = %d\nb = %d\n", a, b);
    return 0;
}
