#include<stdio.h>
int main(){
    int num1,num2,num3;
    float Avg,sum;
    printf("Enter three Numbers\n");
    scanf("%d%d%d",&num1,&num2,&num3);
    
    sum=num1+num2+num3;
    Avg=sum/3.0;
    printf("The Average of the numbers is %.2f\n",Avg);
    return 0;
}