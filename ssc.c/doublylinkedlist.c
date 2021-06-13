#include <stdio.h>
#include <stdlib.h>

struct node {
   int data;
   struct node *prev;
   struct node *next;
};

struct node *head = NULL;
struct node *last = NULL;

struct node *current = NULL;

//display the list
void printList() {
   struct node *ptr = head;

   printf("\n[head] <=>");
   //start from the beginning
   while(ptr != NULL) {        
      printf(" %d <=>",ptr->data);
      ptr = ptr->next;
   }

   printf(" [last]\n");
}

//Create Linked List
void insert(int data) {
   // Allocate memory for new node;
   struct node *link = (struct node*) malloc(sizeof(struct node));

   link->data = data;
   link->prev = NULL;
   link->next = NULL;

   // If head is empty, create new list
   if(head==NULL) {
      head = link;
      return;
   }

   current = head;
   
   // move to the end of the list
   while(current->next!=NULL)
      current = current->next;
   
   // Insert link at the end of the list
   current->next = link;
   last = link;
   link->prev = current;
}


void search(int data) {
   int pos = 0;
   
   if(head==NULL) {
      printf("Linked List not initialized");
      return;
   } 

   current = head;
   while(current!=NULL) {
      pos++;
      if(current->data == data) {
         printf("%d found at position %d\n", data, pos);
         return;
      }
         
      if(current->next != NULL)
         current = current->next;
      else
         break;
   }
      
   printf("%d does not exist in the list\n", data);
}


int main()
{
    printf("name :- Raj Krishna \nsap id :- 1000015049 \nsection :- F \n");
    int x=0,y,z,w;
    printf("enter the no of nodes :- ");
    scanf("%d",&z);
    printf("enter nodes \n");
    for(x=0;x<z;x++)
    {
        scanf("%d",&y);
        insert(y);
    }

   printList();
   printf("enter the no to be searched :- ");
   scanf("%d",&w);
   search(w);
   
   return 0;
}
