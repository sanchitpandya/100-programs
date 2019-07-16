#include<stdio.h>
#define MAX 10
int stack[MAX];
int top=-1;
void push()
{
	if(top>=MAX-1)
		printf("Stack Overflow Condition!\n");
	else
	{
		int data;
		printf("Enter the value to be pushed: ");
		scanf("%d",&data);
		top++;
		stack[top] = data;
	}
}
void pop()
{
	if(top<=-1)
		printf("Stack is empty!\n");
	else
	{
		printf("The popped element is %d!\n",stack[top]);
		top--;
	}
}
void display()
{
	if(top>=0)
	{
		printf("The elements in Stack are: \n");
		for(int i=top;i>=0;i--)
		{
			printf("%d ",stack[i]);
		}
		printf("\n Press Next Choice\n");
	}
	else
		printf("\n The Stack is empty!\n");
}
int main()
{
	int choice;
	do
	{
		printf("Stack Operations: \n");
		printf("1. Push \n");
		printf("2. Pop \n");
		printf("3. Display \n");
		printf("4. Exit \n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				push();
				break;
			
			case 2:
				pop();
				break;
			
			case 3:
				display();
				break;
				
			case 4:
				printf("Exiting Stack Operations!");
				break;
			
			default:				
				printf("Please enter a valid choice(1/2/3/4)");
		}
	}while(choice!=4);
	return 0;
}
