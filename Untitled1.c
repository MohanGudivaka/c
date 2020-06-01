#include<stdio.h>
int main(){
    show();
    show();

}
void show(){
auto int i=0;
register int j=0;
static int k;
i++;
j++;
k++;
printf("%d%d%d\n",i,j,k);
}
