#include <stdio.h>
#include <stdlib.h>
struct node
{
    int val;//valeur
    struct node *next;//pointeur
};
//struct node *init_node(void);
struct node *addHead(struct node *head,int a)
{
    struct node *nouv=(struct node *)malloc(sizeof(struct node));
    nouv->val=a;
    nouv->next=head;
    head = nouv;
    return head;

}


struct node *addTail(struct node *head,int a)
{
    if(head==NULL)
    {
        head=addHead(head,a);
    }
    else
    {
       struct node *nouv=(struct node *)malloc(sizeof(struct node));
        nouv->val=a;
        nouv->next=NULL;
        struct node *ptr=head;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=nouv;
    }
        return head;
}

void display_list(struct node *head)
{
    if(head!=NULL)
    {
       struct node *ptr=head;
        while(ptr!=NULL)
        {
            printf("%d->",ptr->val);
            ptr=ptr->next;
        }
        printf("NULL");

    }
}


int main()
{
   struct node *head=NULL;
    head=addHead(head,3);
    head=addHead(head,1);
     head=addTail(head,5);
    display_list(head);
    getch();
}
