#include<stdio.h>
#include<string.h>

#define MAX 10
int st[MAX];
int top=-1;

void push(int st[],int val);
int pop(int st[]);
int peek(int st[]);
void display(int st[]);

void main()
{
 int val,option;

 do
 {
        printf("\n***MAIN MENU*");
        printf("\n 1. PUSH");
        printf("\n 2. POP");
        printf("\n 3. PEEK");
        printf("\n 4. DISPLAY");
        printf("\n 5. EXIT");
        printf("\n Enter your option: ");
        scanf("%d",&option);

        switch(option)
        {

           case 1:

               printf("\n Enter the number to be pushed in stack :");
               scanf("%d",&val);
               push(st,val);
               break;


           case 2:
        
               val=pop(st);
           
               if(val!=-1)
               printf("\n The deleted element from stack is : %d",val);
               break;

           case 3:

               val=peek(st);
           
               if(val!=-1)
               printf("\n The value stored at top of stack is : %d",val);
               break;

           case 4:

               display(st);
               break;

          
        }
    
    }while(option !=5);

}

 

void push(int st[],int val)
{
  if(top==(MAX-1))
   printf("\nStack overflow");

   else
   {
    top++;
    st[top]=val;
   }
}

int pop(int st[])
{
  if(top==-1)
  {
   printf("\nStack underflow");
   return -1;
  }  

  else
  {
   top--;
   return(st[top+1]);
  }
}

int peek(int st[])
{
  if(top==-1)
  {
   printf("\nStack underflow");
   return -1;
  }  

  else
  {
   return(st[top]);
  }
}

void display(int st[])
{
    int i;
    if(top==-1)
    {
     printf("\nStack is empty");
    }  

  else
  {
    for(i=top;i>=0;i--)
      printf("\n%d",st[i]);
  }
}