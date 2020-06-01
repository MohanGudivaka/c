int main()
{
    int n;
    scanf("%d",&n);
    int k=1;
    printf("%d\n",k);
    printf("%d*%d\n",k+2,k+1);
    for(int i=3;i<=n;i++)
    {
        if(i%2==0)
        {
            k=3*i-2;
        for(int j=2*i-1;j>=i;j--)
        {    if(j==i)
             printf("%d",k);
             else
                printf("%d*",k);
             k--;

        }
        printf("\n");

    }
    else{
        k=2*i-2;
        for(int j=2*i-1;j>=i;j--)
        {
             if(j==i)
             printf("%d",k);
             else
                printf("%d*",k);
             k++;

        }
        printf("\n");

    }


}
}

/* */
