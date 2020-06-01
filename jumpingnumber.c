#include<stdio.h>
#include<math.h>
int main()
{
int n;
scanf("%d",&n);
int i;
for(i=0;i<=n;i++)
{
    if(i<=9)
        printf("%d ",i);
    else if(i<=99){
            int t=i;
            int r=t%10;
            t=t/10;

        if(abs(t-r)==1)
            printf("%d ",i);
    }
    else if(i>=100 && i<=999){
        int t=i;
            int r=t%10;
            t=t/10;
            int k=t%10;
            t=t/10;
            if(abs(t-k)==1 && abs(k-r)==1)
            printf("%d ",i);
    }
    else{
        int t=i;
        int r=t%10;
            t=t/10;
            int k=t%10;
            t=t/10;
            int l=t%10;
            t=t/10;
            if(abs(t-l)==1 && abs(l-k)==1&& abs(k-r)==1)
                printf("%d ",i);

    }
}
}
