#include<stdio.h>
void p1(){
    int a,b;
    printf("Enter a three digit number\n");
    scanf("%d",&a); //123
    b= a%10 + a/10%10 +a/10/10;
    printf("The sum is %d \n",b);
}
void p2(){
    char ch='+';
    printf("The ASCII code of the character %c is %d\n",ch,ch);
}
void p3(){
    int a=10;
    float b=11.5;
    char ch='a';
    double c=10.456789;
    printf("The size of Int variable is %zu\n",sizeof(a));
    printf("The size of float variable is %zu\n",sizeof(b));
    printf("The size of char variable is %zu\n",sizeof(ch));
    printf("The size of Double variable is %zu\n",sizeof(c));
}
void p4(){
    int x = 2345;
    x=x/10;//*10;
    printf("%d\n",x);
}
void p5(){
    int a=234;
    int b=9;
    a=a*10+b;
    printf("%d\n",a);
}
int main(){
    //WAP to input a three digit number and display the sum of the digits.
    p1();
    //WAP to find the ASCII code of the character '+'.
    p2();
    //WAP to print size of an int , a float,a char and a double type variable.
    p3();
    //WAP to make last digit of a number stored in a variable as zero. for example if a number is 2345, then make it 2340.
    p4();
    //WAP to input a number from the user and also input a digit from the user. append the 
    p5();
    return 0;
}