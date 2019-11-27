#include<stdio.h>
void main()
{
    int i,j;char s[20];
    printf("\n enter the name");
    scanf("%s",s);
    for(j=0;s[j]!='\0';j++);
    j--;
    for(i=0;i<j;i++,j--)
    {
        if(s[i]==s[j])
            continue;
        else{
            printf("it is not a palindrome");
break;
        }
    }
    if(i==j)
        printf("\n it is palindrome");

}
