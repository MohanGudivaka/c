int main()
{
    int n=5;
    int j,k,i;
    for( i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
            printf(" ");
        for(k=i;k<2*i-1;k++)
            printf("%d",k);
        for(j=2*i-1;j>i-1;j--)
            printf("%d",j);
        printf("\n");
    }

}
