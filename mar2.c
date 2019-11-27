#include<stdio.h>
int main()
{
    int c;
    scanf("%d",&c);
    int arr[c];
    int i;
    for(i=0;i<c;i++)
    {
        int r,n1,n2,n3,flag=0,flag2=0;
        scanf("%d",&r);
        if(r%3==0)
        {
            for(n1=1;n1<r/3;n1++)
            {
                n2=n1;
                n3=r-(n1+n2);
                while(n3>n2)
                {
                    if(n1==n2)
                    {
                        flag2++;

                    }
                    else
                    {
                        flag++;
                    }
                    n3--;
                    n2++;



                }


            }

        }
        else
        {
              for(n1=1;n1<=r/3;n1++)
            {
                n2=n1;
                n3=r-(n1+n2);
                while(n3>n2)
                {
                    if(n1==n2)
                    {
                        flag2++;

                    }
                    else
                    {
                        flag++;
                    }
                    n3--;
                    n2++;



                }



        }
        }

        arr[i]=flag*6+flag2*3;

    }

    for(i=0;i<c;i++)
    {
        printf("\n%d",arr[i]);
    }







}
