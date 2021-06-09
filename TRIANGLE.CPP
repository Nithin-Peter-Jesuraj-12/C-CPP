#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int a,b,c;
printf("Enter the sides of the triangle \n");
scanf("%d %d %d",&a,&b,&c);
if(((a+b)>c)&&((a+c)>b)&&((c+b)>a))
{
	if(a==b && b==c && c==a)
	printf("Equilateral Triangle \n");
	else if((a==b&&b!=c)||(b==c&&c!=a)||(c==a&&a!=b))
	printf("Isoceles Triangle \n");
	else if(((a^2)+(b^2)==(c^2))||((a^2)+(c^2)==(b^2))||((c^2)+(b^2)==(a^2)))
	printf("Right angled Triangle \n");
	else if((a!=b)&&(b!=c)&&(c!=a))
	printf("Scalene Triangle \n");
}
else
printf("Triangle is not possible with your sides \n");
return 0;
}