#include<stdio.h>
int main()
{
    int i;
    printf("Enter a number \n");
    scanf("%d", &i);
    for (int a=0;a<i;a++)
    {
        for (int b=0;b<=a;b++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}