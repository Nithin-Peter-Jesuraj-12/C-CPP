#include<stdio.h>
#include<conio.h>
#include<windows.h>
void de()
{Sleep(2000);}
void d()
{Sleep(7500);}
void del()
{Sleep(3000);}
int main()
{
long int no,age,est;
printf("Use a calculator if you think you ain't a human calculator. \n");
de();
printf("Think of any natural number. \n");
de();
printf("Multiply your number by 2 and add 5 to it \n");
d();
printf("Multiply the number by 50 and add 1771 to it \n");
d();
printf("Subtract your YEAR OF BIRTH FROM the number. \n");
del();
printf("Enter your estimated number. \n");
scanf("%ld",&est);
age=est%100;
no=(est-age)/100;
if(age!=0)
{
	if(age<100)
	{
	printf("Your age is %ld \n",age);
	printf("The number you thought is %ld \n",no);
	}
	else
	{
	printf("Your age is greater than or equal to the number of international cricket centuries of Sachin Tendular \n");
	}
}
else
{
printf("Your age is %ld \n",age);
printf("The number you thought is %ld \n",no);
printf("You are too young to be born. \n");
}
return 0;
}