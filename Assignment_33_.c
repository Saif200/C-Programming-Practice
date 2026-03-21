#include<stdio.h>
void p1(int a[3][3],int b[3][3],int result[3][3])
{
    //WAP to calculate the sume of two matrices, each of order 3 X 3.

    printf("Enter Element for Array A\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter Element for Array B\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    //Sum of the arrays
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            result[i][j]=a[i][j] + b[i][j];
        }
    }
    printf("\nThe Ruslt of the sum of Bothe Arrays is \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
}

void p2(int a[3][3],int b[3][3],int result[3][3])
{
    //WAP to calculate the product of two matrices, each of order 3 X 3.

    printf("Enter Element for Array A\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter Element for Array B\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    //product of the arrays
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            result[i][j]=a[i][j] * b[i][j];
        }
    }
    printf("\nThe Ruslt of the Product of Bothe Arrays is \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
}

void p3(int a[3][3],int result[3][3])
{
    //WAP to print the transpose of a given matrics .

    printf("Enter Element for Array A\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    //Transpose of the matrics
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            result[j][i]=a[i][j];
        }
    }
    printf("\nThe Transpose of the matric is \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
}


int main()
{
    int a[3][3],b[3][3],result[3][3];
    p1(a,b,result);
    p2(a,b,result);
    p3(a,result);
    return 0;
}