#include<stdio.h>
void p1(char str[],int size)
{
    printf("\n\n========== Convert String to Lower Case ==========\n\n");
    //WAP to convert a given string into a lower case.
    int Rn;
    printf("Enter %d characters for the Array\n",size);
    fgets(str,size+1,stdin);
    for(Rn=0;str[Rn];Rn++);
    if(str[Rn-1]=='\n')
    {
        Rn--;
        str[Rn]='\0';
    }
    for(int i=0;str[i];i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]= str[i]+32;
        }
    }
    printf("%s\n",str);
    
}

void p2(char str[],int size)
{
    printf("\n\n========== Revers String ==========\n\n");
    //WAP to reverse a string.
    int j,end,start=0;
    char temp;
    printf("Enter %d character for the Array\n",size);
    fgets(str,size+1,stdin);
    for(j=0;str[j];j++);
    if(str[j-1]=='\n')
    {
        j--;
        str[j]='\0';
    }
    end=j-1;
    while (start<end)
    {
        temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
    printf("%s\n\n",str);
}

void p3(char str[],int size)
{
    //WAP to count the total number of Alphabet,digits and special characters in a given string.
    int Rn,Alphabet=0,digits=0,character=0;
    printf("Enter %d Alphabets, digits, or special characters from the keyboard\n",size);
    fgets(str,size+1,stdin);
    for(Rn=0;str[Rn];Rn++);
    if(str[Rn-1]=='\n')
    {
        Rn--;
        str[Rn]=='\0';
    }
    for(int i=0;str[i];i++)
    {
        if(str[i]>='A' && str[i]<='Z' || str[i]>='a' && str[i]<='z')
            Alphabet++;
        else if(str[i]>= 48 && str[i]<= 57)
            digits++;
        else if(str[i]>=33 && str[i]<=47 || str[i]>=58 && str[i]<=64 || str[i]>=91 && str[i]<= 96 || str[i]>=123 && str[i]<=126)
            character++;
    }
    printf("There are %d = Alphabet\n%d = Digts\n%d = Special Characters\n",Alphabet,digits,character);
}

void p4(char str[],int size)
{
    //WAP in c to copy one string to another char Array.
    int j;
    char copy[size+1];
    printf("Enter %d characters for the array\n",size);
    fgets(str,size+1,stdin);
    for(j=0;str[j];j++);
    if(str[j-1]=='\n')
    {
        j--;
        str[j]='\0';
    }
    for(int i=0;str[i];i++)
    {
        copy[i]=str[i];
    }
    printf("New array after copying elements\n%s \n",str);
}

void p5(char str[],int size)
{
    //WAP to find the first Occurance of a given character in a given string.
    int j;
    char ch;
    printf("Enter a character to find its first Occurance in the String\n");
    scanf("%c",&ch);
    getchar();
    printf("Enter %d characters for the array\n",size);
    fgets(str,size+1,stdin);
    for(j=0;str[j];j++);
    if(str[j-1]=='\n')
    {
        j--;
        str[j]='\0';
    }
    for(int i=0;str[i];i++)
    {
        if(str[i]==ch)
        {
            printf("The First Occurance of the %c is at %d index\n",ch,i);
            break;
        }
    }
}

int main()
{   int size;
    printf("Enter size of the array\n");
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