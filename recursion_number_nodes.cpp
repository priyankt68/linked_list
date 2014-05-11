/*
Traversing through the linkedlist recursively
*/

#include <iostream>
using namespace std;

struct node
{
	int data;
	struct node* next;

};


void pushNode(struct node **headref, int data)
{
	
	struct node* newnode = new node;
	newnode -> data = data;
	newnode -> next = *(headref);
	*(headref) = newnode;
}

int numNodes(struct node *head)
{
	if (head == NULL)
		return 0;
	else
		return 1 + numNodes(head -> next);
}

int main()
{
	
	struct node* head = NULL;

	pushNode(&head,1);
	pushNode(&head,2);
	pushNode(&head,3);
	pushNode(&head,4);
	pushNode(&head,5);

	cout << numNodes(head);

	return 0;
}