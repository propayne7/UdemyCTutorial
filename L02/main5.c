#include <stdio.h>

int main() {
    int x, y;
    printf("Enter two integers: ");
    //i = scanf("%d %d", &x, &y);

    printf("x = %d, y = %d\n", x, y);
    
    
    int i, a, b;
    a = 50;
    b= 100;
    i = a == b;

    printf("%d\n", i);

    printf("%d\n", printf("Hello")==printf("Hello"));
    printf("%d\n", printf("Angel")==printf("Daemon"));
    return 0;
}
