#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&m,&n);
    int a[n][m];
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            scanf("%d",&a[i][j]);

    }
    int k=1;
    int t=m-2;
    for(i=0;i<m;i++)
    {
    printf("%d",a[0][i]);

    }
    while(k<n&&t>=0)
        {
            printf("%d",a[k][t]);
            k++;
            t--;

        }
for(i=1;i<m;i++)
    {
    printf("%d",a[n-1][i]);

    }
}
