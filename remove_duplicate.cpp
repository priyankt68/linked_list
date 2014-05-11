/*Program to swap alternate nodes in a given linked list

*/


#include <iostream>
using namespace std;


void pushNode(struct node** , int );
void printList(struct node*);

/*Node definition*/

struct node
{
	int data;
	struct node* next;
};


void pushNode(struct node** headref, int data)
{

	struct node* new_node = new node;
	new_node->data = data;
	new_node->next = (*headref);
	(*headref) = new_node;
}

void printList(struct node* node)
{


	while(node != NULL)
	{
		cout << node->data << " ";
		node= node->next;

	}
}

void RemoveDuplicate(struct node* node)
{

	struct node* curr = node;
	struct node* next = node->next;

	while(curr != NULL)
	{

	}
}


int main()
{

	struct node* head=NULL;


	pushNode(&head,5);  // call by reference
	pushNode(&head,4);
	pushNode(&head,3);
	pushNode(&head,2);
	pushNode(&head,1);

	printList(head);    // call by value

	RemoveDuplicate(head);

return 0;
}