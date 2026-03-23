#include<stdio.h>
void p1(char str[],int size)
{
    //WAP to calculate lenth of a given string,without using beltin method.
    int Length;
    printf("Enter %d character for the Array\n",size);
    fgets(str,size+1,stdin);
    
    for(Length=0;str[Length];Length++);
    if(str[Length-1]=='\n')
    {
        Length--;
        str[Length]='\0';
    }
    printf("\nThe length of the string is %d\n",Length);
}

void p2(char str[],int size)
{
    //WAP to count the occurance of a given character in a given string.
    char ch;
    int count=0,j;
    printf("Enter a character\n");
    scanf("%c",&ch);
    getchar();
    printf("Enter %d characters for the string\n",size);
    fgets(str,size+1,stdin);
    for(j= 0;str[j];j++);
    if(str[j-1]=='\n')
    {
        j--;
        str[j]='\0';
    }
    for(int i=0;str[i];i++)
    {
        if(str[i]==ch)
            count++;
    }
    printf("The Occurance of %c in the string is %d\n",ch,count);
}

void p3(char str[],int size)
{
    //WAP to count vowels in a given string.
    int Rn,count=0;
    char vowels[]={'a','e','i','o','u','A','E','I','O','U'};
    printf("Enter a string of %d Character\n",size);
    fgets(str,size+1,stdin);
    for(Rn=0;str[Rn];Rn++);
    if(str[Rn-1]=='\n')
    {
        Rn--;
        str[Rn]='\0';
    }
    for(int i=0;str[i];i++)
    {
        for(int j=0;vowels[j];j++)
        {
            if(vowels[j]==str[i])
                count++;
        }
    }
    printf("Ther are %d Vowels in the string\n",count);

}

void p4(char str[],int size)
{
    //WAP to count spaces in a given string.
    char ch=' ';
    int Rn,count=0;
    printf("Enter %d character for the string\n",size);
    fgets(str,size+1,stdin);
    for(Rn=0;str[Rn];Rn++);
    if(str[Rn-1]=='\n')
    {
        Rn--;
        str[Rn]='\0';
    }
    for(int i=0;str[i];i++)
    {
        if(str[i]==ch)
            count++;
    }
    printf("There are %d spaces in the \"%s\" \n",count,str);
}

void p5(char str[],int size)
{
    //WAP to convert a given string into upper case.
    int Rn,num=32;
    //'a' is greater then'A' =32.
    printf("Enter %d characters for the string\n",size);
    fgets(str,size+1,stdin);
    for(Rn=0;str[Rn];Rn++);
    if(str[Rn-1]=='\n')
    {
        Rn--;
        str[Rn]='\0';
    }
    for(int i=0;str[i];i++)
        {   if(str[i]>='a' && str[i]<='z')
                 str[i]=str[i]-num;
          
        }
    printf("%s",str);
    printf("\n");
}

int main()
{
    int size;
    printf("Enter size of a string\n");
    scanf("%d",&size);
    getchar();
    char str[size+1];
    p1(str,size);
    p2(str,size);
    p3(str,size);
    p4(str,size);
    p5(str,size);

    return 0;
}