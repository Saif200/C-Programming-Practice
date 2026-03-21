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
    printf("\nArray before swap\n");
    for(int i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    int temp=a[indices1];
    a[indices1]=a[indices2];
    a[indices2]=temp;
    printf("\nArray after swap\n");
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
    printf("\nThere are  %d Duplicate values in the array\n",count);
    
}
void p3(int a[],int size)
{
    //Write a function to print all unique elements in an array.

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

void p4(int a[],int size)
{
    //WAF to merge two arrays of the same size stored in descending order.
    int b[size];
    printf("Enter %d numbers for the second array\n",size);
    for(int i=0;i<size;i++)
    {
        scanf("%d",&b[i]);
    }
    int totalsize=size*2;
    int d[totalsize];
    for(int i=0;i<size;i++)
    {
        d[i]=a[i];
        d[i+size]=b[i];
    }
    for(int i=0;i<size+size;i++)
    {
        int temp;
        for(int j=0;j<size+size-1;j++)
        {
            if(d[j]<d[j+1])
            {
                temp=d[j];
                d[j]=d[j+1];
                d[j+1]=temp;
            }
        }
    }
    printf("New Array after Merge of the old two arrays\n");
    for(int i=0;i<size+size;i++)
    {
        printf("%d ",d[i]);
    }
    
}

void p5(int a[], int size)
{
    // Step 1: Sort the array
    for(int i = 0; i < size; i++)
    {
        int temp;
        for(int j = 0; j < size-1; j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    int visited[size];
    for(int i = 0; i < size; i++)
    {
        visited[i] = 0;
    }

    printf("\nFrequency of each element in the Array\n");
    for(int i = 0; i < size; i++)
    {
        if(visited[i] == 1)
        {
            continue;  // ✅ skip already counted element
        }

        int count = 0;
        for(int j = 0; j < size; j++)  // ✅ full size
        {
            if(a[j] == a[i])
            {
                count++;        // ✅ increment count
                visited[j] = 1; // ✅ mark as visited
            }
        }
        printf("%d = %d\n", a[i], count);
    }
}

int main()
{
    int size;
    printf("Enter size of the Array\n");
    scanf("%d",&size);
    int a[size];
    arrayInput(a,size);
   p1(a,size);
   p2(a,10);
   p3(a,size);
   p4(a,size);
   p5(a,size);
   
    return 0;
}