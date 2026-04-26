#include<stdio.h>
#include<string.h>
#include<ctype.h>

void p1(int *a, int *b)
{
    //WAF to swap value of two int variables(TSRN)
    int temp=*a;
    *a=*b;
    *b=temp;
}
int p2(char *str,char ch,int *arr)
{
    //WAF to search all Occurances of a given character
    //in a string.Result of search is a list of indices
    //be stored in a given array.

    int index=0;
    for(int i=0;str[i];i++)
    {
        if(str[i]==ch)
        {
            arr[index]=i;
            index++;
        }
    }
    return index;
}

void p3(char *str)
{
    //WAF to convert a string into upper case.
    for(int i=0;str[i];i++)
    {
        str[i] = toupper((unsigned char)str[i]);
    }

}
void p4(char *str)
{
    //WAF to convert a string into Lowercase.
    for(int i=0;str[i];i++)
    {
        str[i] = tolower((unsigned char)str[i]);
    }
}
void p5(char *str,char *result)
{  
    //WAF to extract a substring from a given string with 
    //spacified start index(inclusive) and end index(exclusive).
    //and stored the extracted string to another char array. 
    int count=0;
    int start_index,end_index;
    printf("Enter start index and End index of the subtracting Array\n");
    scanf(" %d%d",&start_index,&end_index);
    for(int i=start_index;i<end_index;i++)
    {
        result[count]=str[i];
        count++;
    }
}
int main()
{
    int a,b;
    printf("Enter two numbers to swap\n");
    scanf("%d%d",&a,&b);
    printf("Number A = %d , Number B = %d before Swap\n",a,b);
    p1(&a,&b);
    printf("Number A = %d , Number B = %d After Swap\n",a,b);
    char str[100],ch;
    printf("Enter a Sentence of upto 100 character\n");
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    printf("Enter a character to find its Occurances \n");
    scanf(" %c",&ch);
    getchar();
    int arr[100];
    int count=p2(str,ch,arr);
    if(count>0)
    {
        printf("Character %c ",ch);
        printf("is at index ");
        for(int i=0;i<count;i++)
            {
                printf("%d ",arr[i]);
            }
    }
    else
    {
        printf("%c is not found in the sentence\n",ch);
    }
    p3(str);
    // printf("%s",str);
    for(int i=0;str[i];i++)
    {
        printf("%c",str[i]);
    }
    p4(str);
    // printf("%s",str);
    for(int i=0;str[i];i++)
    {
        printf("%c",str[i]);
    }
    char result[100];
    p5(str,result);

    for(int i=0;result[i];i++)
    {
        printf("%c",result[i]);
    }
    return 0;
}