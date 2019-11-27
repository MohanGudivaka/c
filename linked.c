#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
typedef struct node *nptr;
struct node
{
    int data;
    nptr next;


};
int main()
{
    nptr h,new,temp,p;
    int x;
    h=(nptr)(malloc(sizeof(struct node)));
    h->next=NULL;
    temp=h;
    printf("\n\n h is %d",h);
    while(1)
    {
        printf("enter ");
        scanf("%d",&x);
        if(x<0)
        {
            break;
        }
        else
        {
            new=(nptr)(malloc(sizeof(struct node)));
            new->data=x;
            new->next=temp->next;
            temp->next=new;
            temp=new;
        }
    }
    for(p=h->next;p!=NULL;p=p->next)
    {
        printf("%d\t",p->data);
        printf("%d",p->next);
        printf("\n");
    }

}
