#include<stdio.h>
void p1()
{
    //WAP to calculate the sum of numbers stored in an array of size 10. take values from the user
    int a[10],sum=0;
    printf("Enter 10 numbers to caluculate the sum of all numbers stored in the Array\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(int i=0;i<10;i++)
    {
            sum=sum+a[i];
    }
    printf("The sum of All Numbers stored in the Array  is %d\n",sum);
}

void p2()
{
    //WAP to calculate the Average of numbers stored in an array of size 10. take values from the user
    int a[10],sum=0;
    float avg;
    printf("Enter 10 numbers to caluculate the Average of all numbers stored in the Array\n");
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    
    for(int i=0;i<10;i++)
    {
            sum=sum+a[i];
    }
    avg=sum/10.00;
    printf("The Average of All Numbers stored in the Array  is %.2f\n",avg);
}

void p3()
{
    int a[10],Esum=0,osum=0;
    printf("Enter 10 numbers to caluculate the sum of Even numbers and the sum of  Odd Numbers in the Array\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(int i=0;i<10;i++)
    {
        if(a[i]%2==0){
            Esum=Esum+a[i];
        }
        else{
            osum=osum+a[i];
        }
    }
    printf("The sum of All Even Numbers is %d\n",Esum);
    printf("The sum of All Odd Numbers is %d\n",osum);
}
void p4()
{
    int a[10],temp;
    printf("Enter 10 numbers to find the largest Number\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(int i=0;i<10;i++){
        for(int j=0;j<10-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("The Largest Number is %d \n",a[9]);
}

void p5()
{
    //WAP to find the smallest number stored in an array of size 10.
    int a[10],temp;
    printf("Enter 10 numbers to find the smallest number\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(int i=0;i<10;i++){
        for(int j=0;j<10-i-1;j++){
            if(a[j]<a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("The Smallest Number is %d \n",a[9]);
}

int main()
{
    p1();
    p2();
    p3();
    p4();
    p5();
    return 0;
}