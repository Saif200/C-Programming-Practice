#include<stdio.h>
void F_avg(){
    int num1,num2,num3;
    float Avg,sum;
    printf("Enter three Numbers\n");
    scanf("%d%d%d",&num1,&num2,&num3);
    
    sum=num1+num2+num3;
    Avg=sum/3.0;
    printf("The Average of the numbers is %.2f\n",Avg);
    
}
void F_circumference(){
    float radius,circumference;
    const float pi =3.1416;
    printf("Enter Radius of the Circle\n");
    scanf("%f",&radius);
    circumference=2*pi*radius;
    printf("Circumference of the Cirlce is %.2f\n",circumference);
}
void F_simpleInterest(){
    float SI,P,R;
    int T;
    printf("Enter principle Amount, Interest Rate and Time in years\n");
    scanf("%f%f%d",&P,&R,&T);
    SI=(P*R*T)/100.0;
    printf("The Simple Interest is %.2f\n",SI);
}
void F_cuboidVolume(){
    int V,L,W,H;
    printf("Enter Length,Width and Hight\n");
    scanf("%d%d%d",&L,&W,&H);
    V=L*W*H;
    printf("Volume of the Cuboid is %d\n",V);
}
void F_BananaPrice(){
    int sp,cp,rate,checkprice,profit,loss;
    printf("Enter Cost price of 12 Banana\n");
    scanf("%d",&cp);
    printf("Enter Selling Price of 12 Banan\n");
    scanf("%d",&sp);
    rate=cp/12;
    checkprice=rate*12;
    int saleRate=(sp/12);
    if(sp>checkprice)
    {
        profit=(saleRate*25)-(rate*25);
        printf("Profit is %d\n",profit);
    }
    else
    {
        loss=(saleRate*25)-(rate*25);
        printf("Loss is %d\n",loss);
    }
}
int main(){
    F_avg();// WAP to calculate Average of three numbers.
    F_circumference();//WAP to calculate Circumference of a circle.
    F_simpleInterest();//WAP to Calculate Simple Interest.
    F_cuboidVolume();//WAP to calculate Volume of Cuboid.
    F_BananaPrice(); /*WAP to ask user about the cost price and 
                    selling price of banana per dozen.calculate the 
                    profit or loss earned upon selling 25 bananas.*/
    return 0;
}