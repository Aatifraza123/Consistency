#include <stdio.h>
void displayNumbers(int n[2][2])
{
    printf("the elements are\n");
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", n[i][j]);
        }
}

int main()
{
    int x[2][2] = {{12, 56}, {78, 90}};
    displayNumbers(x);
    return 0;
}