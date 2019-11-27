#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,c=0,j,k,temp;
        scanf("%d",&n);
        int a[100];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;

                }
            }
        }
        for(i=n-1;i>=0;i--)
        {  j=0;
           k=i-1;
            while(j<k)
            {

               if(a[i]==(a[j]+a[k]))
               {
                   c++;
                   j++;


               }
               else if(a[i]>(a[j]+a[k]))
               {
                   j++;}
                else
                k--;


            }

            }
        if(c>0)
        printf("%d\n",c);
        else
            printf("-1");
    }
    return 0;

}
