int main()
{
    int n=5;

    for(int i=1;i<=n;i++)
    {
        for (int j=i;j<=n-i;j++)
            printf(" ");
        for(int k=1;k<=2*i-1;k++)
            printf("*");
        printf("\n");

    }

}
