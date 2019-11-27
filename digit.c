#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char str[1000];
    int c;
    char ch;
    scanf("%s",str);
    int len=strlen(str);
    for(int i=0;i<=9;i++)
    { c=0;
        for(int j=0;j<len;j++)
        {
            ch=i+'0';
            if(ch==str[j])
            {

                c++;

            }
        }
        printf("%d ",c);
    }

}
