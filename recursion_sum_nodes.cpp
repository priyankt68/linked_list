#include <iostream>
using namespace std;

struct node
{

int data;
struct node *next;
};

void pushNode(struct node **headref, int data)
{

	struct node *newnode = new node;
	newnode -> data = data;
	newnode -> next = *(headref);
	*(headref) = newnode ;

}


int sumNodes(struct node* head)
{

	if (head == NULL)
		return 0;
	else
		return head -> data + sumNodes(head -> next);
}

int main()
{

	struct node *head = NULL;

	pushNode(&head,1);
	pushNode(&head,2);
	pushNode(&head,3);
	pushNode(&head,4);
	pushNode(&head,5);
	pushNode(&head,1);

	cout << "Sum of the nodes in linkedlist is : " << sumNodes(head);

	return 0;
}