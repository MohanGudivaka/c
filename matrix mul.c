#include<stdio.h>
  void main()
{
    int i,j,k,r,c;
    int a[10][10],b[10][10],d[10][10];
    printf("\n enter the no of rows&columns");
    scanf("%d%d",&r,&c);
    printf("\n enter the matrix   A elements");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
    {
        scanf("%d",&a[i][j]);
    }
    printf("\n enter the matrix B elements");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
    {
        scanf("%d",&b[i][j]);
        d[i][j]=0;
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
        {
            for(k=0;k<r;k++)
            {
                 d[k][i]=d[k][i]+a[k][j]*b[j][i];
            }
        }printf("\n");
        }
        for(i=0;i<r;i++){
        for(j=0;j<c;j++)
        {

                 printf("%d\t",d[i][j]) ;

        }printf("\n");
        }

}
