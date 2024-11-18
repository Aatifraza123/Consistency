#include <stdio.h>
int main(void)
{
    int number1, number2;

    printf("enter two integer"); // call me after some time
    scanf("%d %d", &number1, &number2);

    // check if the two interger is equal//
    if (number1 == number2)
    {

        printf("Result:%d = %d", number1, number2);
    }

    // check if number1 is greater than number2//
    else if (number1 > number2)
    {

        printf("Result:%d > %d", number1, number2);
    }

    // checks if both expression is false//
    else
    {
        printf("Result:%d < %d", number1, number2);
    }
    return 0;
}
