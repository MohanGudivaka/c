#include<Stdio.h>
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
    int r=0;
    for(i=0;i<n;i++)
    {int c=0;
        for(j=0;j<m;j++)
        {
            if(a[i][j]>=0)
                c++;
        }
        if(c==m)
           r++;

    }
    printf("%d",r);
}
