	#include<stdio.h>
	int main()
	{
	int T;
	scanf("%d",&T);
	while(T--)
	{
	    long n,i,j,k,s=0;
	    int count=0,v=0;
	    scanf("%ld",&n);
	    long a[n];
	    for( i=0;i<n;i++)
	    {
	        scanf("%ld",&a[i]);
	    }
	    for(i=0;i<n-1;i++)
	    {
	        for( j=0;j<n;j++)
	        {
	            s=a[j]+a[j+1];
	            for( k=0;k<n;k++)
	            {
	                if(s==a[k])
	                {
	                     count++;
	                     v=1;
	                }
	            }

	    }
	    }
	    if(v==1)
	    printf("\n%d",count);
	    else
	    printf("\n -1");
	}
	return 0;
}
