#include <stdio.h>

int main()
{
	int t,i=0,n;
	scanf("%d",&t);
	while(i<t)
	{
	    int j,n;
	    scanf("%d",&n);
	    int a[n],v=1;
	    for(j=1;j<n;j++)
	    {
	        scanf("%d",&a[i]);
	        if(a[i]==v)
	        {
	            v++;
	        }
	        else
	        {
	            printf("%d",v);
	        }
	    }

	    i++;
	}
	return 0;
}
