#include<stdio.h>
void inputArray(int a[],int size)
{   printf("Enter %d numbers for the Array\n",size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&a[i]);
    }   
}
int p1(int a[],int size)
{
    //WAF to find the greatest number from the given array of any size(TSRS).
    int temp;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    return a[size-1];
}
int p2(int a[],int size)
{
    //WAF to find the Smallest number from the given array of any size(TSRS).
    int temp;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(a[j]<a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    return a[size-1];
}

void p3(int a[],int size)
{
    //WAF to sort an array of any size (TSRN).
    int temp;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\nArray after sort\n");
    for(int k=0;k<size;k++)
    {
        printf("%d , ",a[k]);
    }
}
void p4(int a[],int size)
{
    //WAF to rotate an array by N position and in D Direction. the D is an indicative value for Left or Right Direction.for example if an array of size 5 is [32,29,40,12,70] and N = 2 and D is Left.then the resulting array after left rotation 2 times is [40,12,70,32,29].
    int position;
    char direction;
    printf("Enter the Direction 'L' = left and 'R' = Right \n");
    scanf("\n%c",&direction);
    printf("Enter how my  position do you want to Rotat the Array\n");
    scanf("\n%d",&position);
    position = position % size;
    if(direction=='L')
    {
       for(int i=0;i<size;i++)
       {
        printf("%d ",a[(i+position)%size]);
       }
    }
    else if (direction == 'R')
    {
        for(int i=0;i<size;i++)
       {
        printf("%d ",a[(i-position+size)%size]);
       }
    }
    else
    {
        printf("Invalid Direction\n");
    }
   

}
int  p5(int a[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        if(a[i]==a[i+1])
            return a[i];
    }
    printf("No Adjecent Duplicate values found\n");
    return -1;

}

int main(){
    int size;
    printf("Enter size of the Array\n");
    scanf("%d",&size);
    int a[size];
    inputArray(a,size);
    //int greatesNum=p1(a,size);
   // printf("The Greatest Number in the Array is %d\n",greatesNum);
    //int smallestNum=p2(a,size);
    //printf("The Smallest Number in the Array is %d\n",smallestNum);
    //p3(a,size);
    //p4(a,size);
    int duplicate = p5(a,size);
    if(duplicate >0)
        printf("The First Adjecent Value is %d \n",duplicate);
    return 0;
}