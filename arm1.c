#include<stdio.h>
void main()
{
    int n,r,temp,c,sum=0;
    printf("number");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        c=r*r*r;
        sum=sum+c;
        printf("%d\t",sum);
        n=n/10;
    }
    printf("\n%d",sum);
    if(sum==temp)
        printf("\n armstrong number");
    else
    printf("\n not");

}
