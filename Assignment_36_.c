#include<stdio.h>
#include<string.h>
#include<ctype.h>
void p1(char str[],int size)
{   
    //WAF to calculate length of a string.
    int j;
    printf("Enter size of the Array\n");
    scanf("%d",&size);
    getchar();
    printf("Enter a string of %d characters\n",size);
    fgets(str,size+1,stdin);
    str[strcspn(str,"\n")]='\0';
    printf("The Length of the string %s is %lu\n",str,strlen(str));
}

void p2(char str[],int size)
{
    //WAF to reverse a string.
    int start=0,end,j;
    char temp;
    printf("Enter size of the string\n");
    scanf("%d",&size);
    getchar();
    printf("Enter %d character for the string\n",size);
    fgets(str,size+1,stdin);
    str[strcspn(str, "\n")]='\0';
    for(j=0;str[j];j++);
    end=j-1;
    while (start<end)
    {
        temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
    printf("The Reverse string is \" %s \" \n",str);
}

void p3(char str[],int size)
{
    //WAF to compare two string.
    char str2[size+1];
    printf("Enter size of the String\n");
    scanf("%d",&size);
    getchar();
    printf("Enter %d characters for the string\n",size);
    fgets(str,size+1,stdin);
    str[strcspn(str,"\n")]='\0';
    
    printf("Enter %d characters for the second string\n",size);
    fgets(str2,size+1,stdin);
    str2[strcspn(str2,"\n")]='\0';

    int num=strcmp(str,str2);
    if(num<0)
        printf("\" %s \" is greater then \" %s \" \n",str2,str);
    else if(num>0)
        printf("\" %s \" is greater then \" %s \" \n",str,str2);
    else
        printf("Bothe are Equel\n");
}

void p4(char str[],int size)
{
    //WAF to transform a string into uppercase.
    printf("Enter size of the String\n");
    scanf("%d",&size);
    getchar();
    printf("Enter %d characters for the string\n",size);
    fgets(str,size+1,stdin);
    str[strcspn(str,"\n")]='\0';
    for(int i=0;str[i];i++)
    {
        str[i]= toupper(str[i]);
    }
    printf("Upper case string = %s\n",str);
}

void p5(char str[],int size)
{
    //WAF to transform a string into Lowercase.
    printf("Enter size of the String\n");
    scanf("%d",&size);
    getchar();
    printf("Enter %d characters for the string\n",size);
    fgets(str,size+1,stdin);
    str[strcspn(str,"\n")]='\0';
    for(int i=0;str[i];i++)
    {
        str[i]= tolower(str[i]);
    }
    printf("Lower case string = %s\n",str);
}

int main()
{   int size;
    char str[size];
    // p1(str,size);
    // p2(str,size);
    // p3(str,size);
    // p4(str,size);
     p5(str,size);
    return 0;
}