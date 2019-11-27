#include<stdio.h>

int main()
{
    int c;

    c = getchar();
    while ( c != EOF ) {
       c = getchar();
    }
    return 0;
}
