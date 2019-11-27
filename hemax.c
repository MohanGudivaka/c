#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int d[N][N];
    int a[N],b[N],c[N],i,j,k,arr[N],sum=0,x,max,temp=0;
    for(i=1;i<=N;i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=1;i<=N;i++)
    {
        scanf("%d",&b[i]);

    }
    for(i=1;i<=N;i++)
    {
        scanf("%d",&c[i]);

    }
    for(i=1;i<=N;i++)
    {
        k=0;
        for(j=1;j<=c[i];j++)
        {
            if((j&c[i])==j)
            {
                k++;
                d[i][k]=j;


            }


        }

        arr[i]=k;

    }
    for(i=1;i<=N;i++)
    {
        max=0;
        for(k=1;k<=arr[i];k++)
        {

            temp=b[i]^d[i][k];

            x=a[i]^temp;

            if(x>max)
            {
                max=x;
                b[i]=temp;

            }
        }

        sum=sum+max;
    }
    printf("%d",sum);
}

