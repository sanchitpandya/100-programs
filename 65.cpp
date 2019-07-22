#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	node* next;
};
node* start = NULL;
node* getnode()
{
	node* newnode;
	newnode = (node*)malloc(sizeof(node));
	printf("Enter data: ");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	return newnode;
}
void createlist(int n)
{
	for(int i=1;i<=n;i++)
	{
		node* newnode;
		node* temp;
		newnode = getnode();
		if(start==NULL)
			start = newnode;
		else
		{
			temp = start;
			while(temp->next!=NULL)
				temp = temp->next;
			temp->next = newnode;
		}
	}
}
void insertion()
{
	node* temp;
	temp = start;
	node* newnode;
	newnode = getnode();
	while(temp->next!=NULL)
		temp = temp->next;
	temp->next = newnode;
}
void deletion()
{
	node* temp;
	node* temp1;
	temp = start;
	while(temp->next!=NULL)
	{
		temp1 = temp;
		temp = temp->next;
	}
	temp1->next = NULL;
}
void traverse()
{
	node* temp;
	temp = start;
	while(temp->next!=NULL)
	{
		printf("%d ",temp->data);
		temp = temp->next;
	}
	printf("%d \n",temp->data);
}
int main()
{
	int n;
	printf("Enter the number of nodes you want: ");
	scanf("%d",&n);
	createlist(n);
	int choice;
	do
	{
		printf("Linklist operations: \n");
		printf("1. Insertion\n");
		printf("2. Deletion\n");
		printf("3. Traverse\n");
		printf("4. Exit!\n");
		printf("Enter your choice: (1/2/3/4): ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				insertion();
				break;
				
			case 2:
				deletion();
				break;
				
			case 3:
				traverse();
				break;
				
			default:
				printf("Enter a valid choice (1/2/3/4)!\n");
		}
	}while(choice!=4);
	traverse();
}
