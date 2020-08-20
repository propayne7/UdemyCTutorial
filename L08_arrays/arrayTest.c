#include <stdio.h>

int main()
{
    int count = 10;
    int grades[10]; // grades array storying 10 values
    long sum = 0;
    float average = 0.0f;

    printf("\nEnter the 10 grades:\n");

    for(int i = 0; i < count; ++i)
    {
        printf("%2u> ", i + 1);
        scanf("%d", &grades[i]);
        sum += grades[i];
    }

    average = (float)sum/count;

    printf("\nAverage of the ten g rades entered is: %.2f\n", average);


    return 0;
}