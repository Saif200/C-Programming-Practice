#include<stdio.h>
void p1(){
    printf("Size of 'A' is %zu\n",sizeof('A'));
}
void p2(){
    printf("Size of 3.5 is %zu\n",sizeof(3.5));
}
void p3(){
    char ch = 'A';
    ch++;
    printf("%c\n",ch);
}
void p4(){
    int a=10,b=20,c;
    c=a;
    a=b;
    b=c;
    printf("A = %d\nB = %d\n",a,b);
}
int main(){
    //WAP to calculate size of a character constant.
    p1();
    //WAP to calculate size of a real constant.
    p2();
    //WAP with one char type variable,Assign 'A' in the variable.now change the value of the variable from 'A' to 'B'.
    p3();
    //WAP to swap values of two integer variables.
    p4();
    return 0;
}