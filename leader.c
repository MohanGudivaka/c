#include <stdio.h>

int main() {
int t,n;
scanf("%d",&t);
while(t--)
{
   scanf("%d",&n);
   int a[n],i,j,c,b[n];
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
       b[i]=0;
   }
   c=a[n-1];
   b[n-1]=c;
   for(i=n-2;i>=0;i--)
   {
       if(c<a[i])
       {
        c=a[i];
        b[i]=c;
       }
   }
   for(i=0;i<n;i++)
   {
       if(a[i]==0)
        printf("%d ",a[i]);
       else if(b[i]!=0)
        printf("%d ",b[i]);
   }
   printf("\n");

}

return 0;
}


