#include<stdio.h>
void arrayInput(int a[],int size)
{
    //This function input the array.
    printf("Enter %d Numbers\n",size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&a[i]);
    }   
}

void p1(int a[],int size)
{
    int indices1,indices2;
    printf("Enter 2 indices you want to swap their values\n");
    scanf("%d%d",&indices1,&indices2);
    printf("Array before swap\n");
    for(int i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    int temp=a[indices1];
    a[indices1]=a[indices2];
    a[indices2]=temp;
    printf("Array after swap\n");
    for(int i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
}

void p2(int a[],int size)
{
    //WAF to count a total number of duplicate element in an array(Means element that occures
    // 2 times  in an array)
    int count=0;
        for(int i=0;i<size;i++)
        {
            for(int j=i+1;j<size;j++)
            {
                if(a[i]==a[j])
                {
                    count++;
                }
                
            }
        }
    printf("There are  %d Duplicate values in the array\n",count);
    
}
void p3(int a[],int size)
{
        printf("Unique elements in the array: ");
    
    for (int i = 0; i < size; i++)
    {
        int isDuplicate = 0;  // flag to mark if duplicate is found
        
        for (int j = 0; j < size; j++)
        {
            if (i != j && a[i] == a[j])  // skip comparing with itself
            {
                isDuplicate = 1;
                break;
            }
        }
        
        if (isDuplicate == 0)
        {
            printf("%d ", a[i]);
        }
    }
    printf("\n");
}


int main()
{
    int size;
    printf("Enter size of the Array\n");
    scanf("%d",&size);
    int a[size];
    arrayInput(a,size);
   // p1(a,size);
   // p2(a,10);
   //p3(a,size);
   

    // ----- Question 4 and 5 are remaining.

    return 0;
}