#include<stdio.h>
#include<stdlib.h>
struct node{
	int coeff,exp;
	struct node *next;
};
struct node *head, *tail;
struct node *input()
{
	int c,e;
	struct node *new_node;
	printf("Enter the coefficient: ");
	scanf("%d",&c);
	printf("Enter the exponent: ");
	scanf("%d",&e);
	head=NULL;
	tail=NULL;
	while (e!=-1)
	{
		new_node=(struct node*)malloc(sizeof(struct node));
		new_node->next=NULL;
		new_node->exp=NULL;
		new_node->coeff=NULL;
		if (head==NULL)
		{
			head=new_node;
			tail=new_node;
		}
		else
		{
			tail->next=new_node;
			tail=new_node;
		}
		printf("Enter the coefficient: ");
		scanf("%d",&c);
		printf("Enter the exponent: ");
		scanf("%d",&e);
	}
	return head;
}

void addpoly( struct node *head1, struct node *head2, struct node *head3)
{
	while (head1 && head2)
	{
		if (head1->exp==head2->exp)
		{
			head3->exp=head1->exp;
			head3->coeff=head1->coeff+head2->coeff;
			head1=head1->next;
			head2-head2->next;
		}
		else if (head1->exp>head2->exp)
		{
			head3->exp=head1->exp;
			head3->coeff=head1->coeff;
			head1=head1->next;
		}
		else
		{
			head3->exp=head2->exp;
			head3->coeff=head2->coeff;
			head2=head2->next;
		}
		head3->next=(struct node*)malloc(sizeof(struct node));
		head3=head3->next;
		head3->next=NULL;
	}
	while (head1 || head2) 
	{
		if (head1->next)
		{
			head3->exp=head1->exp;
			head3->coeff=head1->coeff;
			head1=head1->next;
		}
		if (head2->next) 
		{
			head3->exp=head2->exp;
			head3->coeff = head2->coeff;
			head2 = head2->next;
		}
		head3->next= (struct node*)malloc(sizeof(struct node));
		head3 = head3->next;
		head3->next = NULL;
	}
}

void print(struct node *head) {
struct node *ptr=head;
while(ptr != NULL)
{
printf("\t %d * %d ",ptr->coeff,ptr->exp);
ptr=ptr->next;
}
}

int main()
{
	struct node *head1,*head2,*head3;
	printf("Input 1st polynomial.\n");
	head1=input();
	printf("The 1st polynomial is: ");
	print(head1);
	printf("\nInput 2nd polynomial.\n");
	head2=input();
	printf("The 2nd polynomial is: ");
	print(head2);
	printf("\nAddition of polynomial.\n");
	head3=(struct node*)malloc(sizeof(struct node));
	addpoly(head1,head2,head3);
	printf("The sum of two polynomials: ");
	print(head3);
	return 0;
}