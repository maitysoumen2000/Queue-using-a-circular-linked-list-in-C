#include<stdio.h>
#include<stdlib.h>

struct node
{
	int info;
	struct node *link;
};

void display(struct node *last);
struct node *push(struct node *last,int data);
struct node *peek(struct node*last);
struct node *pop(struct node*last);

int main( )
{
	int data;
	struct node	*last=NULL;

			last=push(last,7);
			last=push(last,1);
			last=push(last,5);
			display(last);
			pop(last);
			last=push(last,0);
			display(last);
			peek(last);
}

struct node *push(struct node *last,int data)
{
	struct node *tmp;
	tmp=(struct node *)malloc(sizeof(struct node));
	if(last == NULL)
	{
	    tmp->info=data;
	last=tmp;
	last->link=last;
	}
	else
	{
	tmp->info=data;
	tmp->link=last->link;
	last->link=tmp;
	last=tmp;
	}
	printf("Enqueue done\n");
	return last;
}

struct node *pop(struct node *last)
{
	struct node *tmp,*p;
	if(last==NULL)
	{
		printf("List is empty\n");
		return last;
	}
	
	if(last->link==last) 
        {
                tmp=last;
                last=NULL;
        }
         else
        {
                tmp=last->link;
                last->link=last->link->link;
        }
        free(tmp);
        printf("Dequeue done\n");

	return last;
}

void display(struct node *last)
{
	struct node *p;
	if(last==NULL)
	{
		printf("List is empty\n");
		return;
	}
	p=last->link;
	printf("Queue view: ");
	do 
	{
		printf("%d ",p->info);
		p=p->link;
	}while(p!=last->link);
	printf("\n");
}

struct node *peek(struct node*last)
{
    printf("Peek element of Queue: %d",last->link->info);
}
