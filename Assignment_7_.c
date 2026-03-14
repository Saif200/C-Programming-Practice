#include<stdio.h>
void p1(){
    //WAP a program to check whether a given number is positive on non positive.
    int num;
    printf("Enter a number to check whether a given number is positve or non positive: ");
    scanf("%d",&num);
    if(num>0)
        printf("Positive Number\n");
    else
        printf("Non Positive Number\n ");
}
void p2(){
    //WAP to check whether a given number is divisible by 5 or not.
    int num;
    printf("Enter a number to check whether it is divisible by 5 or not: ");
    scanf("%d",&num);
    if(num%5==0)
        printf("Divisible by %d\n",num);
    else
        printf("Not Divisible by %d\n ",num);
}
void p3(){
    //WAP to check whether a given number is an even number or an odd number.
    int num;
    printf("Enter a number to check whether it is even or Odd: ");
    scanf("%d",&num);
    if(num%2==0)
        printf("%d is an Even Number\n",num);
    else
        printf("%d is an Odd Number\n",num);
}
void p4(){
    //WAP to check whether a given number is Even or Odd without using % .
    int num;
    printf("Enter a number to check whether it is even or Odd: ");
    scanf("%d",&num);
    if(num / 2 * 2==num)
        printf("%d is an Even Number\n",num);
    else
        printf("%d is an Odd Number\n",num);
     
}
void p5(){
    //WAP to check whether a given number is Even or Odd using  bitwise operator.
     int num;
    printf("Enter a number to check whether it is even or Odd: ");
    scanf("%d",&num);
    if(num & 1)
        printf("%d is an Odd Number\n",num);
    else
        printf("%d is an Even Number\n",num);
}
int main(){
    p1();
    p2();
    p3();
    p4();
    p5();
    return 0;
}