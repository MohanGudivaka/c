#include<stdio.h>
 int main()
 {
     int n,i,j,sum=0,dif=0;
     int visit=0;
     scanf("%d",&n);
     int a[n];
     for(i=0;i<n;i++)
     {
         scanf("%d",&a[i]);

     }
     for(i=0;i<n;i++)
     {
         sum=0;
         dif=0;
         for(j=0;j<n;j++)
         {
             if(i!=j)
             {
                dif=a[j]-a[i];
                sum=sum+dif;
             }
         }
         if(sum==0)
         { visit=1;
             printf("1");
             break;

            }

     }
     if(!visit)
        printf("0");
 }
