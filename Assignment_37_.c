#include<stdio.h>
#include<string.h>
#include<ctype.h>
void p1(char str[])
{
    //WAF to count vowels in a given string.
    int size,j;
    char vowels[]={'a','e','i','o','u','A','E','I','O','U'};
    int count=0;
    printf("Enter size of the String\n");
    scanf("%d",&size);
    getchar();
    printf("Enter %d characters for the String\n",size);
    fgets(str,size+1,stdin);
    for(j=0;str[j];j++);
    str[strcspn(str,"\n")]='\0';
    for(int i=0;str[i];i++)
    {
        for(int j=0;vowels[j];j++)
        {
            if(vowels[j]==str[i])
            {
                count++;
            }
        }
    }
    printf("There are %d Vowels in the string \" %s \" \n",count,str);
}

int p2(char str[],int size)
{
    //WAF to find a character in a given string.Return index of first occurance of given character. Return -1 if character not found.
    char ch;
    
    printf("Enter a character to search in the String\n");
    scanf("%c",&ch);
    getchar();
    printf("Enter %d characters for the String\n",size);
    fgets(str,size+1,stdin);
    str[strcspn(str,"\n")]='\0';
    for(int i=0;str[i];i++)
    {
        if(ch == str[i])
        {
            return i;
        }           
    }
    return -1;

}

int p3(char str[],int size)
{
    //WAF to find a character in a given string between specified indices, start index (inclulsive) and end index(exclusive).
    int start,end,j;
    char ch;
    printf("Enter %d characters in the string\n",size);
    fgets(str,size+1,stdin);
    str[strcspn(str,"\n")]='\0';
    
    printf("\nEnter a character to find in the string\n");
    scanf("%c",&ch);
    getchar();
    printf("Enter Start Index and End index to find Character betwen\n");
    scanf("%d%d",&start,&end);
    getchar();
    for(j=0;str[j];j++);
    while(start<end)
    {
        if(str[start]==ch)
        {
            printf("%c found \n",ch);
            return 0;
        }
        start++;
    }
    printf("%c not found int the \" %s \" \n",ch,str);
    return 0;
}

void p4(char str[],int size)
{
    //WAF to swap two character of a given string with specified indecies.
    int start,end,j;
    char temp;
    printf("Enter %d characters in the string\n",size);
    fgets(str,size+1,stdin);
    str[strcspn(str,"\n")]='\0';
    
    printf("Enter Start Index and End index to swap two characters\n");
    scanf("%d%d",&start,&end);
    getchar();

        temp=str[start];
        str[start]=str[end];
        str[end]=temp;

            printf("String after swap is %s \n",str);
    
}

int p5(char str[], int size)
{
    int hasLetter = 0;
    int hasDigit = 0;

    printf("Enter string:\n");
    fgets(str, size + 1, stdin);

    str[strcspn(str, "\n")] = '\0';

    for(int i = 0; str[i]; i++)
    {
        if( (str[i] >= 'A' && str[i] <= 'Z') ||
            (str[i] >= 'a' && str[i] <= 'z') )
        {
            hasLetter = 1;
        }
        else if(str[i] >= '0' && str[i] <= '9')
        {
            hasDigit = 1;
        }
    }

    if(hasLetter && hasDigit)
        printf("It is an Alphanumeric string\n");
    else
        printf("Not an Alphanumeric string\n");

    return 0;
}

int main()
{
    int size;
    printf("Enter size of the String\n");
    scanf("%d",&size);
    getchar();
    char str[size+1];
    //p1(str);
    // int num=p2(str,size);
    // if(num != -1)
    //     printf("The Index is %d \n",num);
    // else
    //     printf("Character is not in the String\n");
    // p3(str,size);
    //p4(str,size);
    p5(str,size);
    return 0;
}