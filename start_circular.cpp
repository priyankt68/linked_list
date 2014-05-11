/*

Given a circular linked list, implement an algorithm which returns node at the beginning of the loop.
DEFINITION
Circular linked list: A (corrupt) linked list in which a node’s next pointer points to an earlier node, so as to make a loop in the linked list.
EXAMPLE
input: A -> B -> C -> D -> E -> C [the same C as earlier]
output: C

*/

#include <iostream>
using namespace std;


void pushNode(struct node**,int);
void printList(struct node*);
struct node* StartCircularNode(struct node*);

struct node
{
	int data;
	struct node *next;

};


struct node* pushNode(struct node **headref , int data)
{
	struct node *newnode = new node;
	newnode -> data = data;
	newnode -> next = *headref;
	*headref = newnode;

	return newnode;
}

void printList(struct node *head)
{
	while(head != NULL)
	{
		cout << head -> data << " ";
		head = head -> next;
	}
}

int main(int argc, char const *argv[])
{

	struct node *head = NULL;

	pushNode(&head,1);
	pushNode(&head,2);
	pushNode(&head,3);
	pushNode(&head,4);

	printList(head);

	FindStart(head);


	return 0;
}