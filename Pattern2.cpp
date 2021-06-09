#include<stdio.h>
int i;
/*void odd(){
    for (int a=1; a<=(i+1)/2; a++)
        {
        for(int b=1; b<=a;b++)
            {
                printf("* ");
            }
            printf("\n");
        }
    for (int c=(i-1)/2; c>=1; c--)
        {
        for(int d=c;d>=1;d--)
            {
                printf("* ");
            }
            printf("\n");
        }
}*/
int main()
{
    int i;
    printf("Enter a number. \n");
    scanf("%d", &i);
    if((i%2)!=0)
    {
        //odd(x);
        for (int a=1; a<=(i+1)/2; a++)
        {
            for(int b=1; b<=a;b++)
            {
                printf("* ");
            }
            printf("\n");
        }
        for (int c=(i-1)/2; c>=1; c--)
        {
            for(int d=c;d>=1;d--)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}