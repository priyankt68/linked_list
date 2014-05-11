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
	*(headref) = newnode;
}

void printList(struct node *head)
{

	if (head == NULL)
		return;
	else
		cout << head -> data;
		return printList(head -> next);

}

void reverseLinkedlist(struct node* node)
{

	if ( node == NULL)
	{
		return node;
	}
	else
	{

	struct node *revhead -> next = reverseLinkedlist(node -> next);

	}

}

int main()
{

	struct node *head = NULL;

	pushNode(&head,1);
	pushNode(&head,2);
	pushNode(&head,3);
	pushNode(&head,4);
	pushNode(&head,5);

	printList(head);

	struct node *reversehead = reverseLinkedlist(head);

	printList(reversehead);

	return 0;
}