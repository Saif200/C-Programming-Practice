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
int main(){
    //F_avg();// WAP to calculate Average of three numbers.
    //F_circumference();//WAP to calculate Circumference of a circle.
    //F_simpleInterest();//WAP to Calculate Simple Interest.
    F_cuboidVolume();//WAP to calculate Volume of Cuboid.
    return 0;
}