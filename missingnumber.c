#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n],s=0,t;
    for(i=1;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=1;i<n;i++)
    {
        s=s+a[i];


    }
    t=(n*(n+1))/2;
    printf("%d",t-s);


}
