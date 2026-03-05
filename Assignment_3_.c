#include<stdio.h>
void p1()
{
    char ch;
    printf("Enter a Character\n");
    scanf("%c",&ch);
    printf("The Ascii code of the charachter %c is %d\n",ch,ch);
}
void p2(){
    int num;
    printf("Enter a character to print its Character\n");
    scanf("%d",&num);
    printf("The character for the number %d is %c\n",num,num);
}
void p3(){
    char a,b,c;
    printf("Enter three character\n");
    scanf(" %c %c %c",&a,&b,&c);
    printf("The Ascii code for the character %c %c and %c is %d  %d  %d\n",a,b,c,a,b,c);
}
void p4(){
    int n=345;
    n=n%10;
    printf("%d\n",n);
}
void p5(){
    int n=345;
    n=n/10;
    printf("%d\n",n);
}
int main(){
    //WAP to input a character from ther user and print its ASCII code.
    p1(); 
    //WAP to input an ASCII code from the user and print its corresponding character.
    p2();
    //WAP to input three character from the user and display character with its corresponding Ascii code.
    p3();
    //Wap to print last digit of a given number.
    p4();
    //WAP to print a number without last Digit.
    p5();
    return 0;
}