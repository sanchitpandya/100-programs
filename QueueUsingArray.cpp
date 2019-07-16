#include<stdio.h>
#define MAX 10
int queue[MAX];
int front=-1;
int rear=-1;
void insert_queue()
{
	if(rear>=MAX-1)
		printf("Queue Overflow Condition!\n");
	else
	{
		if(front==-1)
			front = 0;
		int data;
		printf("Enter the value to be inserted: ");
		scanf("%d",&data);
		rear++;
		queue[rear] = data;
	}
}
void delete_queue()
{
	if(front==-1 || front>rear)
		printf("Queue is empty!\n");
	else
	{
		printf("The popped element is %d!\n",queue[front]);
		front++;
	}
}
void display_queue()
{
	if(front==-1 || front>rear)
		printf("\nQueue is empty!\n");
	else
	{
		printf("The elements in Queue are: \n");
		for(int i=front;i<=rear;i++)
		{
			printf("%d ",queue[i]);
		}
		printf("\n Press Next Choice\n");
	}
}
int main()
{
	int choice;
	do
	{
		printf("Queue Operations: \n");
		printf("1. Insert in queue \n");
		printf("2. Delete from queue \n");
		printf("3. Display \n");
		printf("4. Exit \n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				insert_queue();
				break;
			
			case 2:
				delete_queue();
				break;
			
			case 3:
				display_queue();
				break;
				
			case 4:
				printf("Exiting Queue Operations!");
				break;
			
			default:				
				printf("Please enter a valid choice(1/2/3/4)");
		}
	}while(choice!=4);
	return 0;
}
