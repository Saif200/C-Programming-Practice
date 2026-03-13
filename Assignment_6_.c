#include<stdio.h>
void p1(){
    int pkr,usd,usd_rate=280;
    printf("Enter Amount in PKR to Convert it in USD: \n");
    scanf("%d",&pkr);
    usd=pkr/usd_rate;
    printf("The Rs %d in Us dollor is $ %d \n",pkr,usd);
}
void p2(){
    int a,b;
    printf("Enter a three Digit number: ");
    scanf("%d",&a);
    b=a%10;
    b=b*100 + a/10;
    printf("%d \n",b);
}
void p3(){
    int x=10>8>4;
    printf("The vlaue store in x=10>8>1 is %d\n",x);
}
void p4(){
    int x=!2>-2;
    printf("The value store in x=!2>-2 is %d\n",x);
}
void p5(){
    int x=3<0 && 5>0;
    printf("The Value of x=3<0 && 5>0 is %d\n",x);
}
int main(){
    //Assume price of 1 usd in PKR is 280. WAP to take the amount in PKR and Convert it to USD.
    p1();
    //WAP to take a three digit number from the user and rotate its digit by one position towards the right.
    p2();
    //What value will be stored in the variable x after executing the following statement x=10>8>1.
    p3();
    //What value will be store in the variable x after executing the following statement x=!2>-2.
    p4();
    //What value will be store in the variable x after executing the following statement x=3<0 && 5>0.
    p5();
    return 0;
}