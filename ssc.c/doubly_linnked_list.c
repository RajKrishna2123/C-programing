#include <stdio.h>
#include <stdlib.h>

/* 
 * Basic structure of Node
 */
struct node {
    int data;
    struct node * prev;
    struct node * next;
}*head, *last;


/*
 * Function used in this program 
 */
void createList(int n);
void displayListFromFirst();
void displayListFromEnd();
void search(int data);


int main()
{
    int n, choice,z;

    head = NULL;
    last = NULL;
    
    printf("Enter the number of nodes you want to create: ");
    scanf("%d", &n);

    createList(n); 

    printf("\nPress 1 to display list from First");
    printf("\nPress 2 to display list from End : ");
    scanf("%d", &choice);

    if(choice==1)
    {
        displayListFromFirst();
    }
    else if(choice == 2)
    {
        displayListFromEnd();
    }
    printf("enter the no you want to search :- ");
    scanf("%d",z);
    search(z);
    return 0;
}
void createList(int n)
{
    int i, data;
    struct node *newNode;

    if(n >= 1)
    {
        head = (struct node *)malloc(sizeof(struct node));

        if(head != NULL)
        {
            printf("Enter data of 1 node: ");
            scanf("%d", &data);

            head->data = data;
            head->prev = NULL;
            head->next = NULL;

            last = head;

           
            for(i=2; i<=n; i++)
            {
                newNode = (struct node *)malloc(sizeof(struct node));

                if(newNode != NULL)
                {
                    printf("Enter data of %d node: ", i);
                    scanf("%d", &data);

                    newNode->data = data;
                    newNode->prev = last; 
                    newNode->next = NULL;

                    last->next = newNode;
                    last = newNode;          
                }
                else
                {
                    printf("Unable to allocate memory.");
                    break;
                }
            }

            printf("\nDOUBLY LINKED LIST CREATED SUCCESSFULLY\n");
        }
        else
        {
            printf("Unable to allocate memory");
        }
    }
}
void displayListFromFirst()
{
    struct node * temp;
    int n = 1;
    if(head == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        temp = head;
        printf("\n\nDATA IN THE LIST:\n");
        while(temp != NULL)
        {
            printf("DATA of %d node = %d\n", n, temp->data);
            n++;       
            temp = temp->next;
        }
    }
}
void displayListFromEnd()
{
    struct node * temp;
    int n = 0;

    if(last == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        temp = last;
        printf("\n\nDATA IN THE LIST:\n");

        while(temp != NULL)
        {
            printf("DATA of last-%d node = %d\n", n, temp->data);
            n++;
            temp = temp->prev; 
        }
    }
}
void search(int data) {
   int pos = 0;
   if(head==NULL) {
      printf("Linked List not initialized");
      return;
   } 

   newNode = head;
   while(newNode!=NULL) 
    {
      pos++;
      if(current->data == data) 
        {
           printf("%d found at position %d\n", data, pos);
           return;
        }
         
      if(newNode->next != NULL)
         current = current->next;
      else
         break;
    }
      
   printf("%d does not exist in the list\n", data);
}