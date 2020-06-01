int main()
{
    int n=5;
    for(int i=1;i<=n;i++)
    {
        for (int j=i;j<n;j++)
            printf(" ");
        for(int k=i;k>=1;k--)
            printf("%d",k);
        printf("\n");

    }

}
