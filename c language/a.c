#include <stdio.h>
int main()
{
    int num1, num2, sum;

    printf("enter two integers");
    scanf("%d %d", &num1, &num2);

    sum = num1 + num2;

    printf("%d + %d = %d", num1, num2, sum);
    int num3, div;
    printf("\n\nEnter a number to divide");
    scanf("%d", &num3);
    div = sum / num3;
    printf("division:%d", div);
    return 0;
}