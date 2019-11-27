#include<stdio.h>
#include<stdlib.h>
typedef struct node *nptr;
struct node
{
    int data;
    nptr next;

};
int main()
{
    nptr temp,h,new,p;
    int x;
    h=(nptr)(malloc(sizeof(struct node)));
    h->next=NULL;
    temp=h;
    printf("\n\n h is %d",h);
    while(1)
    {
        printf("\n\n enter - to stop");
        scanf("%d",&x);
    if(x<=0)
        break;
    else
    {
        new=(nptr)(malloc(sizeof(struct node)));
        new->data=x;
        new->next=temp->next;
        temp->next=new;
        temp=new;
    }}
    for(p=p->next;p!=NULL;p=p->next->next)
    {
        printf("data in node is %d\t",p->data);
        printf("address in node is %d\t",p->next);
    }
}
