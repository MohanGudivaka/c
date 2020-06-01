int main()
{
    int n;
    scanf("%d",&n);
    int m=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            printf("%d",m);
            m=m+1;
            if(j!=n)
                printf("*");


        }
        printf("%d",2/3);

    }

}

