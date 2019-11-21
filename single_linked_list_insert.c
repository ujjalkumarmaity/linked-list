#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

struct node {
  int value;
  struct node *next;
}*first_node,*head_node,*temp;

void insert(item)
{
	temp=(struct node*)malloc(sizeof(struct node));
	temp->value=item;
	if(first_node==0)
	{
		first_node=temp;
	}
	else
	{
		head_node->next=temp;
	}
	temp->next = 0;
    head_node = temp;
}
void display()
{
	temp=first_node;
	while(temp!=0)	
	{
		printf("%d \n",temp->value);
		temp=temp->next;
	}
} 
int main()
{
	insert(10);
	insert(10);
	insert(10);
	display();
	return 0;
}
