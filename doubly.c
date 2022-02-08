#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *prev,*next;
};
struct node *start=null;
void traverse()
{
    if(start==null)
    {
        printf("\n list is empty");
    }
    struct node *temp;
    temp=start;
    while(temp!=null)
    {
        printf("-->=%d",temp->data);
        temp=temp->next;
    }
}
void insert beg()
{
    int data;
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("\n Enter element to be inserted:\n");
    scanf("%d",&data);
    temp->data=data;
    temp->prev=null;
    temp->next=start;
    start=temp;
    printf("\n%d is inserted\n",data);
}
void insert atend()
{
    int data;
    struct node *temp,*trav;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->prev=null;
    temp->next=null;
    printf("\n Enter element to be inserted:\n");
    scanf("%d",&data);
    temp->data=data;
    temp->next=null;
    trav=start;
    if(start==null)
    {
        start=temp;
    }
    else
    {
        while(trav->next!=null)
            trav=trav->next;
            temp->prev=trav;
            trav->next=temp;
    }
}
void insert atpos()
{
    int data,pos,i=1;
    struct node*temp,*newnode;
    newnode=(struct node*)malloc(sizeof(struct node))
    newnode->next=null;
    newnode->prev=null;
    printf("\n Enter position:");
    scanf("%d",&pos);
    printf("\n Enter element to be inserted:");
    scanf("%d",&data);
    newnode->data=data;
    temp=start;
    if(start==null)
    {
        start=newnode;
        newnode->prev=null;
        newnode->next=null;
    }
    else if(pos==1)
    {
        newnode->next=start;
        newnode->next->prev=newnode;
        newnode->prev=null;
        start=newnode;
    }
    else
    {
        while(i<pos-1)
        {
            temp=temp->next;
            i++;
        }
        newnode->next=temp->next;
        newnode->prev=temp;
        temp->next=newnode;
        temp>next->prev=newnode;
    }
}
void deletebeg()
{
    struct node *temp;
    if(start==null)
    {
        printf("\n list is empty\n");
    }
    else
    {
        temp=start;
        start=start->next;
        if(start!=null)
        {
            start->prev=null;
        }
        free(temp);
    }
}
void deleteatend()
{
    start node*temp;
    if(start==null)
    printf("\n list is empty\n");
    temp=start;
    while(temp->next!=null)
        temp=temp->next;
    if(start->next=null)
        start=null;
    else
    {
        temp->prev-.next=null;
        free(temp);
    }
}
void deleteatpos()
{
    int pos,i=1;
    struct node *temp,*position;
    temp=start;
    if(start==null)
    printf("\n list is empty");
    else
    {
     printf("\n Enter the position:");
     scanf("%d",&pos);
    if(pos==1)
    {
        start->prev=null;
    }
    free(position);
    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    position=temp->next;
    if(position->next!=null)
    position->next->prev=temp;
    temp->next=position->next;
    free(position);
    }

}
void traverse();
void insertatbeg();
void insertatend();
void insertatpos();
void deleteatbeg();
void deleteatend();
void deleteatpos();
void main()
{
    int choice;
    printf("\n Doubly linked list \n");
    while(1)
    {
        printf("\n 1.Traverse\n 2.Insert at beginning\n 3.Insert at end\n 4.Insert at position\n 5.Delete at beginning\n 6.Delete at end\n 7.Delete at position\n 8.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            traverse();
            break;
        case 2:
            insert at beg();
            break;
        case 3:
            insert atend();
            break;
        case 4:
            insert atpos();
            break;
        case 5:
            delete atbeg();
            break;
        case 6:
            delete atend();
            break;
        case 7:
            delete atpos();
            break;
        case 8:
            exit(0);
        default:
            printf("\n wrong choice");

        }
    }
}
