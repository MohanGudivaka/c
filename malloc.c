 #include<stdio.h>
  # define wait() getche()
# define display printf
void main()
{
    int k;
    for(k=0;k<10;k++)
    {
      display("%d",k);

    }
    wait();
}
