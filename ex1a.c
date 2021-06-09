#include<stdio.h>
int add(int x,int y)
{
    int sum=x+y;
    printf("%d ",sum);
}
int main()
{
    int a,b;
    printf("Enter your two numbers: \n");
    scanf("%d %d",&a,&b);
    add(a,b);
    return 0;
}