#include<stdio.h>
#include<string.h>
#include<ctype.h>

int p1(char str[],int size)
{
    //WAF to check whether a given string is a palindrom or not.
    printf("Enter a word to check is it palindrom or not\n");
    fgets(str,size+1,stdin);
    str[strcspn(str,"\n")]='\0';
    int i,L;
    L=strlen(str)-1;
    for(i=0;str[i]/2;i++,L--)
        {
            if(str[i] != str[L])
            {
                return 0;
            }
        }
    return 1;
    
}
char* p2(char str[],int size)
{
    //WAF to trim a string (removing leading spaces from both the ends).
    printf("Enter a string upto 5o characters. \n");
    fgets(str,size+1,stdin);
    str[strcspn(str,"\n")]='\0';
    int Fspace=0,Espace,i,count=0;
    for(Espace=strlen(str)-1;Espace>=0 && str[Espace] ==' ';Espace--)
    {
            str[Espace]='\0';
    }
    while (str[Fspace] ==' ')
    {
        Fspace++;
    }
    int j=0;
    for(i=Fspace;str[i];i++)
    {
        str[j]=str[i];
        j++;
    }
     str[j]='\0';
    printf("%s ",str);

}
int p3(char str[],int size)
{
    //WAF to count words in a given string.
    printf("Enter %d characters for the string to count its words\n");
    fgets(str,size+1,stdin);
    str[strcspn(str,"\n")]='\0';
    int count=0;
    for(int i=0;str[i];i++)
    {
        if(str[i]==' ')
        {
            if(str[i+1]==' ')
                continue;
            count++;
        }
    }
    printf("There are %d words in the string\n",count+1);
    return count+1;
}

void p4(char str[],int size)
{
    /* WAF to reverse string word wise.for example if the word 
       is("mysirg education services, then the resulting string
       should be "services education mysirg).
    */
    // printf("Enter %d characters for the string to reverse string  word wise\n");
    // fgets(str,size+1,stdin);
    // str[strcspn(str,"\n")]='\0';
    // int count=0;
    // char str2[size+1];
    // for(int i=strlen(str)-1;str[i]=str[0];i--)
    // {
    //     if(str[i]==' ')
    //     {
    //         if(str[i-1]==' ')
    //         {
    //             continue;
    //         }
    //         else
    //         {
    //             count++;
    //         }
    //     }
    //     for(int k=0,j=strlen(str)-count;str[j];k++,j++)
    //     {
    //         str2[k]=str[j];
    //     }
    // }
    
    //printf("%s \n",str2);

}
void p5(char str[],int size)
{
    printf("Enter %d characters for a string\n",size);
    fgets(str,size+1,stdin);
    str[strcspn(str,"\n")]='\0';

    char str2[size+1];
    printf("Enter %d characters for second string\n",size);
    fgets(str2,size+1,stdin);
    str2[strcspn(str2,"\n")]='\0';
    for(int i=0;str[i];i++)
    {
        if(str[i]>='a' && str[i]<='z')
            str[i]-32;
    }
    for(int i=0;str2[i];i++)
    {
        if(str2[i]>='a' && str2[i]<='z')
            str2[i]-32;
    }
    int k=0;
    for(k=0;str[k];k++)
    {
        if(str[k]!=str2[k])
            break;
    }
    if(k!=strlen(str))
        printf("String are not same\n");
    else
        printf("String are same\n");
}
int main()
{
    int size;
    printf("Enter size of the String\n");
    scanf("%d",&size);
    getchar();
    char str[size+1];
     int ret=p1(str,size);
         if(ret==1)
            printf("%s is a Palindrom\n",str);
         else
            printf("%s is not a Palindrome\n",str);
     p2(str,size);
     p3(str,size);
    p4(str,size);
    p5(str,size);

    return 0;
}