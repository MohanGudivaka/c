#include<stdio.h>

int main()
{
     long int T;
    scanf("%ld",&T);
    while(T--)
    {
         long int n;
        scanf("%d",&n);
        int v=0;
        for( int i=n+1;i<n+9;i++)
        {
            int count=0;
            for(int j=1;j<=i;j++)
            {
                if(i%j==0)
                    count+=1;


            }
            if(count==2)
            {
                if((i^n)<n)
                {
                    printf("%ld",i);
                    v=1;
                    break;

                }
            }
        }
        if(v==0)
            printf("%d",-1);
             int m=0;
        for( int i=n+1;i<n+9;i++)
        {
            int count=0;
            for(int j=1;j<=i;j++)
            {
                if(i%j==0)
                    count+=1;


            }
            if(count==2)
            {
                if((i^n)>n)
                {
                    printf(" %ld",i);
                    m=1;
                    break;

                }
            }
        }
        if(m==0)
            printf("%d",-1);
         int q=0;
        for( int i=n+1;i<n+9;i++)
        {
            int count=0;
            for(int j=1;j<=i;j++)
            {
                if(i%j==0)
                    count+=1;


            }
            if(count>2)
            {
                if((i^n)<n)
                {
                    printf(" %ld",i);
                    q=1;
                    break;

                }
            }
        }
        if(q==0)
            printf("%d",-1);
         int p=0;
        for( int i=n+1;i<n+9;i++)
        {
            int count=0;
            for(int j=1;j<=i;j++)
            {
                if(i%j==0)
                    count+=1;


            }
            if(count>2)
            {
                if((i^n)>n)
                {
                    printf(" %ld",i);
                    p=1;
                    break;

                }
            }
        }
        if(p==0)
            printf("%d",-1);


    }
}
