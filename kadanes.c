#include<stdio.h>
void main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,j,max;
        int sum;
        scanf("%d",&n);
        int a[n];
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
        max=a[0];
            sum=0;

            for(j=0;j<n;j++)

            {
                sum=sum+a[j];
                if(max<sum)
                max=sum;
                if(sum<0)
                sum=0;


            }
            printf("%d\n",max);




}
}


