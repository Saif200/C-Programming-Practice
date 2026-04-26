
#include <stdio.h>
void p1(char str[])
{
    int f[128]={0},i;
    for(i=0;str[i];i++)
        f[str[i]]++;
    for(i=0;i<=127;i++)
        if(f[i]!=0)
            printf("%c - %d\n",i,f[i]);
}

int main()
{
    char str[100];
    printf("Enter a sentence under 100 character\n");
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    p1(str);
    return 0;
}