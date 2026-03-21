#include<stdio.h>
void p1()
{
    //WAP to check whether a given number is a three digit number or not.
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    if(a>99 && a<=999)
    {
        printf("%d is a three digit Number\n",a);
    }
    else
    {
        printf("%d is not a three digit Number\n",a);
    }
}

void p2()
{
    //WAP to print greater between two numbers.print one number if borth are the same .
    int num1,num2;
    printf("Enter 2 Numbers\n");
    scanf("%d%d",&num1,&num2);
    if(num1>num2)
        printf("%d\n",num1);
    else
        printf("%d is the greater number\n",num2);
}
void p3()
{
    //WAP to check whether a given is leap or not.
    int year;
    printf("Enter the Year\n");
    scanf("%d",&year);
    if(year%400==0)
        printf("The year %d is a Leap year\n",year);
    else if(year%100==0)
        printf("The year %d is not a Leap year\n",year);
    else if(year%4==0)
        printf("The year %d is a Leap year\n",year);
    else
        printf("The year %d is not a Leap year\n",year);

}
void p5()
{
    //WAP to find the greatest among the three given number.print once if the greatest number apear once, two or three.
    int num1,num2,num3;
    printf("Enter 3 numbers\n");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1>num2 && num1 > num3)
        printf("The greatest numbe is %d\n",num1);
    else if(num2 > num3)
         printf("The greatest numbe is %d\n",num2);
    else if(num3 >num1)
         printf("The greatest numbe is %d\n",num3);
    else
        printf("All numbers are same\n");
}

int main()
{
    //p1();
    //p2();
    //p3();
    p5();

    return 0;
}