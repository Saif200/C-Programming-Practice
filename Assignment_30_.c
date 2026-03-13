#include<stdio.h>
void p1(){
    //WAP to sort element of an array of size 10.take array values from the user.
    int a[10],temp;
    printf("Enter 10 numbers to sort an array\n");
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    printf("\nArray before sort\n");
    for(int i=0;i<10;i++){
        printf("%d , ",a[i]);
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
    printf("\nArray after sort\n");
    for(int i=0;i<10;i++){
        printf("%d , ",a[i]);
    }
}
void p2()
{
    //WAP to find the second largest number in an array.take array values from the user.
    int a[10],temp;
    printf("Enter 10 numbers the second Largest Number\n");
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
    printf("The second Largest Number is %d \n",a[8]);
}

void p3()
{
    //WAP to find the second smallest number in an array.take array values from the user.
    int a[10],temp;
    printf("Enter 10 numbers to find the second Smallest Number\n");
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
    printf("The second Smallest Number is %d \n",a[8]);
}

void p4(){
    //WAP to sort element of an array of size 10 in desecnding order.take array values from the user.
    int a[10],temp;
    printf("Enter 10 numbers to sort array in desending Order\n");
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    printf("\nArray before sort\n");
    for(int i=0;i<10;i++){
        printf("%d , ",a[i]);
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
    printf("\nArray after sort\n");
    for(int i=0;i<10;i++){
        printf("%d , ",a[i]);
    }
}

void p5(){
    //WAP to copy the number of one array to another array.take array values from the user.
    int a[10],b[10];
    printf("Enter 10 numbers to copy the array to another array\n");
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
   
    for(int i=0;i<10;i++){
       b[i]=a[i];
    }
    printf("\nSecond Array after copying Element form first Array\n");
    for(int i=0;i<10;i++){
        printf("%d , ",b[i]);
    }
}


int main(){
    p1();
    p2();
    p3();
    p4();
    p5();
    return 0;
}