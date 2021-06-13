#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
	 };
  struct node *head,*newnode,*temp;
  //head=0;
  int choice=1,ct;
  void create()
{
  while(choice)
  {
  	newnode=(struct node *)malloc(sizeof(struct node));
  	printf("enter data");
  	scanf("%d",&newnode->data);
  	newnode->next=0;
  	if(head==NULL)
  	temp=head=newnode;
  	else
  	{
  		temp->next=newnode;
  		temp=newnode;
	  }
	  printf("do you want to continue(0,1)?");
	  scanf("%d",&choice);
	}
}
    void insertatbeg()
    {
    	newnode=(struct node *)malloc(sizeof(struct node));
    	printf("enter data to insert");
    	scanf("%d",&newnode->data);
    	newnode->next=head;
    	head=newnode;
	}
	void insertatend()
	{
		newnode=(struct node *)malloc(sizeof(struct node));
			printf("enter data to insert");
    	scanf("%d",&newnode->data);
    	newnode->next=0;
    	temp=head;
    	while(temp->next!=0)
    	{
    		temp=temp->next;
		}//now temp points to last node of LL
		temp->next=newnode;
	}
	void insertatpos()
	{
		int i=1,pos;
		newnode=(struct node *)malloc(sizeof(struct node));
    	printf("enter the position");
    	scanf("%d",&pos);
    	if(pos>ct || pos<0)
    	printf("invalid position");
    	else
    	{
    		temp=head;
    		while(i<pos-1)
    		{
    			temp=temp->next;
    			i++;
			}//temp points to the prevnode where newnode is to be inserted
			printf("enter data to insert");
    	scanf("%d",&newnode->data);
    	newnode->next=temp->next;
    	temp->next=newnode;
		}
	}
	void deleteatbeg()
	{
	    if(head==0)
		printf("No node in the list");
		else
		{
			temp=head;
			head=head->next;
			free(temp);
			}	
	}
	void deletefromend()
	{
		struct node *prevnode;
		temp=head;
		while(temp->next!=0)
		{
			prevnode=temp;
			temp=temp->next;
		}//temp here points to last node while prevnode points to second last node
		if(temp==head)//one node in the list
		head=0;
		else
		prevnode->next=0;
		free(temp);
	}
	void delete_from_specified_pos()
	{
		struct node *nextnode;
		int pos,i=1;
		printf("enter position");
		scanf("%d",&pos);
		if(pos<0 || pos>ct)
		printf("wrong position entered!");
		else
		{
		temp=head;
		while(i<pos-1)
		{
			temp=temp->next;
			i++;
		}//temp points to prevnode wgere newnode is to be inserted
		nextnode=temp->next;
		temp->next=nextnode->next;
		free(nextnode);
	}
}
void search()
{
	int x,ct=1,f;
	printf("enter the element to search");
	scanf("%d",&x);
	struct node *temp;
	temp=head;
	while(temp!=0)
	{
		if(temp->data==x)
		{
		printf("element found at position %d\n",ct);
		f=1;
		break;
	}
		else
		ct++;
		temp=temp->next;
	}
	if(f==0)
	printf("SOORY! element not present in linked list");
}
	void traverse()
	{
		ct=0;
		printf("your linked list is\n");
		temp=head;
		while(temp!=0)
		{
			printf("%d ",temp->data);
			temp=temp->next;
			ct++;
		}
		printf("\nNo. of node in linked list is %d\n",ct);
	}
	int main()
	{
		int ch;
		printf("\nName :-  Raj Krishna \n SAP ID :- 1000015049 \n ROLL NO :- 200102297 \n\n\n");
		printf("1. Creation of Linked List\n");
		printf("2. Insert at beginning\n");
		printf("3. Insert at end\n");
		printf("4. Insert at specified position\n");
		printf("5. delete from beginning\n");
		printf("6. delete from end\n");
		printf("7. delete from specified position\n");
		printf("8. Traverse\n");p
		printf("9. Search the element\n");
		printf("10. exit\n");
			while(1)
		{
		printf("enter choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:create();
			break;
			case 2:insertatbeg();
			break;
			case 3:insertatend();
			break;
			case 4:insertatpos();
			break;
			case 5:deleteatbeg();
			break;
			case 6:deletefromend();
			break;
			case 7:delete_from_specified_pos();
			break;
			case 8:traverse();
			break;
			case 9:search();
			break;
			case 10:exit(1);
			break;
			default:printf("wrong choice");
		}
	}
		return 0;
	}
