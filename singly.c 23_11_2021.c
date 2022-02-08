#include<stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node*next;
};
struct node *head;
void beginsert();
void lastinsert();
void speciinsertion();
void begdelete();
void lastdelete();
void specideletion();
void display();
void main()
{
    int choice =0;
    while(choice != 8)
    {
        printf("\n\n*********Main Menu*********\n");
        printf("\nChoose one option from the following list\n");
        printf("\n=====================================\n");
        printf("\n 1.Insert in beginning\n2.insert at last\n 3.insert at specific position \n4.delete from beginning\n 5.delete at last \n 6.delete at specific position\n7.display\n 8.exit");
        printf("\nEnter your choice?\n");
        scanf("\n%d",&choice);
        switch(choice)
        {
        case 1:
            beginsert();
            break;
        case 2:
            lastinsert();
            break;
        case 3:
            speciinsertion();
            break;
        case 4:
            begdelete();
            break;
        case 5:
            lastdelete();
            break;
        case 6:
            specideletion();
            break;
        case 7:
            display();
            break;
        case 8:
            exit(0);
            break;
            default:
            printf("Please enter valid choice");

        }
    }
}
void beginsert()
{
    struct node*ptr;
    int item;
     ptr = (struct node *) malloc(sizeof(struct node *));
    if(ptr == NULL)
      {
        printf("\nOVERFLOW");
      }
    else
      {
        printf("\nEnter value:\n");
        scanf("%d",&item);
        ptr->data = item;
        ptr->next = head;
        head = ptr;
        printf("\nNode inserted:");
      }
}
void lastinsert()
{
  struct node *ptr,*temp;
    int item;
    ptr = (struct node*)malloc(sizeof(struct node));
    if(ptr == NULL)
    {
        printf("\nOVERFLOW");
    }
      else
    {
        printf("\nEnter value:\n");
        scanf("%d",&item);
        ptr->data = item;
        if(head == NULL)
        {
            ptr -> next = NULL;
            head = ptr;
            printf("\nNode inserted");
        }

        else
        {
            temp = head;
            while (temp -> next != NULL)
            {
                temp = temp -> next;
            }
            temp->next = ptr;
            ptr->next = NULL;
            printf("\nNode inserted");

        }
    }
}
void begdelete()
{
  struct node *ptr;
    if(head == NULL)
    {
        printf("\nList is empty\n");
    }
    else
    {
         ptr = head;
        head = ptr->next;
        free(ptr);
        printf("\nnode deleted from the beginning\n");
    }
}
void speciinsertion()
{
  int i,loc,item;
    struct node *ptr, *temp;
    ptr = (struct node *) malloc (sizeof(struct node));
    if(ptr == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        printf("\nEnter element value");
        scanf("%d",&item);
        ptr->data = item;
        printf("\nEnter the location after which you want to insert ");
        scanf("\n%d",&loc);
        temp=head;
        for(i=0;i<loc;i++)
        {
            temp = temp->next;
            if(temp == NULL)
            {
                printf("\ncan't insert\n");
                return;
            }

        }
        ptr ->next = temp ->next;
        temp ->next = ptr;
        printf("\nNode inserted");
    }
}

void lastdelete()
{
    struct node *ptr,*ptr1;
    if(head == NULL)
    {
        printf("\nlist is empty");
    }
    else if(head -> next == NULL)
    {
        head = NULL;
        free(head);
        printf("\nOnly node of the list deleted\n");
    }

    else
    {
        ptr = head;
        while(ptr->next != NULL)
           {
            ptr1 = ptr;
            ptr = ptr ->next;
        }
        ptr1->next = NULL;
        free(ptr);
        printf("\nDeleted Node from the last ...\n");
    }
}
void specideletion()
{
    struct node *ptr,*ptr1;
    int loc,i;
    printf("\n Enter the location of the node after which you want to perform deletion \n");
    scanf("%d",&loc);
    ptr=head;
    for(i=0;i<loc;i++)
    {
        ptr1 = ptr;
        ptr = ptr->next;

        if(ptr == NULL)
        {
            printf("\nCan't delete");
            return;
        }
    }
    ptr1 ->next = ptr ->next;
    free(ptr);
    printf("\nDeleted node %d ",loc+1);
}
void display()
{
    struct node*ptr;
    ptr = head;
    if(ptr == NULL)
    {
        printf("Nothing to print");
    }
      else
    {
        printf("\nprinting values\n");
        while (ptr!=NULL)
        {
            printf("\n%d",ptr->data);
            ptr = ptr -> next;
        }
    }
}
