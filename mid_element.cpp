#include <iostream>
using namespace std;


struct node
{
	int data;
	struct node *next;
};

void pushNode(struct node **headref, int data)
{
	struct node * newnode = new node;
	newnode -> next = *(headref);
	newnode -> data = data;
	*(headref) = newnode;
}

struct node* MidElement(struct node *head)
{
	int c=0;

	struct node *temp = head;

	while (temp != NULL)
	{
		temp=temp->next;
		c+=1;
	}
	int mid ;
	if(!(c%2))
		mid = c/2;
	else
		mid = (c+1)/2;

	c=1;
	while(c!=mid)
	{
		head = head->next;
		c++;
	}

	return head;
}
int main()
{
	

	struct node *head = NULL;
	
	pushNode(&head,7);
	pushNode(&head,6);
	pushNode(&head,5);
	pushNode(&head,4);
	pushNode(&head,3);
	pushNode(&head,2);
	pushNode(&head,1);


	struct node* middle = MidElement(head);

	cout << middle -> data ;

}