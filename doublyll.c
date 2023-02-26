#include<stdio.h>
#include<stdlib.h>

struct Node {
	int data;
	struct Node *next;
	struct Node *prev;
};

struct pair {
struct Node *head;
struct Node *tail;
};

struct Node *create()
{
	int data;
	printf("Enter the data :");
	scanf("%d",&data);
	struct Node *head=NULL;
	struct Node *tail=NULL;
	while (data !=-1) 
	{
		struct Node* newnode = (struct Node*) malloc(sizeof(struct Node));
		newnode->data=data;
		newnode-> next=NULL;
		newnode->prev=NULL;
		if(head==NULL)
	 	{
			head=newnode;
			tail=newnode;
		} 
		else 
		{
			tail->next=newnode;
			newnode->prev=tail;
			tail=newnode;
		}
		printf("Enter the data :");
		scanf("%d",&data);
	}
	return head;
}

struct Node *insert (struct Node *head,int i,int data) 
{
	struct Node* newnode = (struct Node*) malloc(sizeof(struct Node));
	newnode->data=data;
	int count=1;
	struct Node *temp=head;
	if(i==0) 
	{
		newnode->next=head;
		newnode->prev=NULL;
		head=newnode;
		return head;
	}
	while(temp!=NULL && count<i-1) 
	{
		temp=temp->next;
		count++;
	}
	if(temp!=NULL)
	{
		newnode->next=temp->next;
		temp->next=newnode;
		newnode->prev=temp;
	}
	if(newnode->next != NULL)
	{
		newnode->next=newnode;
		newnode->prev=newnode;
	}
	return head;
}

struct Node *deletenode (struct Node *head,int i) 
{
	struct Node *a;
	struct Node *b;
	struct Node *c;
	if(head==NULL) 
	{
		return head;
	}
	struct Node *temp=head;
	int count=1;
	if(i==0) 
	{
		head=temp->next;
		return head;
	}
	while(temp!=NULL && count<i-1) 
	{
		temp=temp->next;
		count++;
	}
	if(temp!=NULL) 
	{
		a =temp->next;
		b=a->next;
		c=a->prev;
		temp->next=b;
		temp->next->prev=c;
	}
	return head;
}

struct Node *reverse (struct Node *head) 
{
	if (head == NULL || head->next==NULL) 
	{
		return head;
	}
	struct Node *temp = head;
	while ( temp->next != NULL) 
	{
		temp=temp->next;
	}
	while(temp!=NULL) 
	{
		printf("%d ",temp->data);
		temp=temp->prev;
	}
	return head;
}

void printlist(struct Node *head) 
{
	while (head != NULL) 
	{
		printf("%d ",head->data);
		head=head->next;
	}
}
int main() 
{
	int ch,i,data;
	struct Node *head;
	while (1)
	{
		printf("\n\t1. Create linked list\n");
		printf("\t2. Traverse the list\n");
		printf("\t3. Insertion operation\n");
		printf("\t4. Deletion operation\n");
		printf("\t5. Reverse the list\n");
		printf("\t6. Exit\n");
		printf("\nEnter your choice :");
		scanf("%d", &ch);
		switch (ch)
		{
			case 1:
			head=create();
			break;
			case 2:
			printlist(head);
			break;
			case 3:
			printf("Position to insert the node:");
			scanf("%d",&i);
			printf("\nEnter the data: ");
			scanf("%d",&data);
			head=insert(head,i,data);
			printf("Node inserted. List updated.");
			break;
			case 4:
			printf("Position of node to be deleted:");
			scanf("%d",&i);
			head=deletenode(head,i);
			printf("Node deleted. List updated.");
			break;
			case 5:
			head=reverse(head);
			break;
			case 6:
			exit(1);
			break;
			default:
			printf("Invalid Choice\n");
		}
	}
	return 0;
}