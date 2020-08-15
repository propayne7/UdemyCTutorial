#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argvp[])
{
    // program to print the perimeter and area of a rectangle
    double l1, w1, area, perimeter;

    l1 = 4.5;
    w1 = 2.3;

    perimeter = 2 *(l1 + w1);
    area = l1 * w1;

    printf("With a length of: %.2f and a height of: %.2f\n", l1, w1);
    printf("\tPerimeter = %.2f\n", perimeter);
    printf("\tArea = %.2f\n", area);


    enum FamilyMember {Chris = 1, Amanda, Evey, Cambo};

    printf("Value of Chris = %d\n", Chris);
    printf("Value of Amanda = %d\n", Amanda);
    printf("Value of Evey = %d\n", Evey);
    printf("Value of Cambo = %d\n", Cambo);

    unsigned int a = 60; // 0011 1100
    unsigned int b = 13; // 0000 1101
    int result = 0;

    int c = a & b; // 0000 1100 -> decimal value of 12
    int d = a | b; // 0011 1101 -> decimal value of 61

    unsigned int e = 0xCA; // 1100 1010a
    printf("sizeof(e): %lu\n", sizeof(e)); // should print 4 -> which means 4 bytes (32 bits) are stored for an integer
    unsigned int f = e;
    e = e >> 2;  //0011  0010;

    unsigned int g = f << 2; //0011 0010 1000

    printf("c shifted: %d\n", c);
    printf("d shifted: %d\n", d);
    printf("e shifted: %d\n", e);
    printf("g shifted: %d\n", g);

    printf("true/false: %d\n", ((1 == 2) != 3));

    return 0;
}