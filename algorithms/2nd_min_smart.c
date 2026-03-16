#include <stdio.h>
#include <limits.h>

int main()
{
    int numbers[10] = {9, 3, 5, -10, 13, 27, 99, -142, 91, 57};
    int minimum = INT_MAX;
    int second_min = INT_MAX;
    for (int i = 0; i < 10; i++)
    {
        if (numbers[i] < minimum)
        {
            second_min = minimum;
            minimum = numbers[i];
        }
        else if (second_min > numbers[i])
        {
            second_min = numbers[i];
        }
    }
    printf("Min: %d\n", minimum);
    printf("Second_Min: %d\n", second_min);
    return 0;
}