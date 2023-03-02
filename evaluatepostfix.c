#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next, *prev;
};

struct node *start=NULL;

struct node * create_ll(struct node *start)
{

  struct node *new_node,*ptr;
  int num;
  printf("\n Enter -1 to end");
  printf("\n Enter the data :");
  scanf("%d",&num);

  while(num != -1)
  {

   new_node=(struct node *)malloc(sizeof(struct node));
   new_node->data=num;

   new_node->next=NULL;
new_node->prev=NULL;



   if(start==NULL)
   {
   
     start=new_node;
     ptr=start;
   }
   else
   {

     ptr->next=new_node;
     new_node->prev=ptr;
     ptr=new_node;

    
    }
    printf("\n Enter the data :");
    scanf("%d",&num);
   }
 return start;
}

struct node * display(struct node *start)
{
  struct node *ptr;
  ptr=start;

  while(ptr != NULL)
  {

    printf("\t %d",ptr->data);
    ptr=ptr->next;
  }
  return start;
}

int main()
{
	printf("Creating the Linked List:\n");
	start=create_ll(start);
	printf("\nDisplaying the Linked List:\n");
	start=display(start);
	return 0;
}
