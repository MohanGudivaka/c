#include<stdio.h>
int main()
{
    int ch;
    int flag=0;
    ch=getchar();
    while(ch!=EOF&&ch!='\n')
    {
        if(ch==' '||ch==','||ch=='.'||ch==';'||ch=='\t')
            flag++;
        ch=getchar();
    }
    if(flag==0)
        printf("-1");
    else
        printf("%d",flag);
}
