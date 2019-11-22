#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *link;
}*first,*temp,*head,*p;

void insert(int item)
{
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=item;
	if(first==0)
		first=temp;
	else
		head->link=temp;
	temp->link=0;
	head=temp;
	
}
void insert_any(int item,int pos)
{
	p=(struct node *)malloc(sizeof(struct node));
	p->data=item;
	int counter=0;
	temp=first;
	if(pos==0)
	{
		p->link=temp;
		first=p;	
		return ;
	}
	while(temp!=0)
	{
		counter+=1;
		if(pos==counter)
		{
			p->link=temp->link;
			temp->link=p;
			return;
		}
		temp=temp->link;
		
	}
	printf("insertion is not possible");
		
}
void display()
{
	temp=first;
	while(temp!=0)
	{
		printf("%d\n",temp->data);
		temp=temp->link;
	}
}
int main()
{
	insert(10);
	insert(11);
	insert(12);
	insert(13);
	insert_any(14,0);
	display();
	return 0;
}
