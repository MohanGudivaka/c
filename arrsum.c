#include<stdio.h>


int main()
{



int i,j,n,k,count=0,m=0,max=-64,z=0;
int arrsum[100]={0};
int arr[6][6];
for(i=0;i<6;i++)
{  for(j=0;j<6;j++)
{
    scanf("%d",&arr[i][j]);

}


}
for(i=0;i<4;i++)
{
    for(j=0;j<4;j++,z++)
    {
        n=3+j;
        count=0;
        for(k=j;k<n;k++)
        {
            arrsum[z] = arrsum[z]+ arr[i][k];
            count++;
            if(count==2)
            {
                m=i+1;
                arrsum[z]=arrsum[z]+arr[m][k];
            }
        }
        m=m+1;
        for(k=j;k<n;k++)
        {
            arrsum[z] = arrsum[z]+ arr[m][k];

    }

    }




}

for(i=0;i<=z;i++)
{
    if(arrsum[i]>max)
    {
        max=arrsum[i];

    }



}

printf("%d", max);
}

