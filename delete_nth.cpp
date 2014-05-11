
#include <iostream>
using namespace std;


void pushNode(struct node** , int );
void printList(struct node*);
void nthToLast(struct node **, int );

/*Node definition*/

struct node
{
	int data;
	struct node* next;
};


struct node* pushNode(struct node** headref, int data)
{

	struct node* new_node = new node;
	new_node->data = data;
	new_node->next = (*headref);
	(*headref) = new_node;

	return new_node;
}

void printList(struct node* node)
{


	while(node != NULL)
	{
		cout << node->data << " ";
		node= node->next;

	}
}


int main()
{

	struct node* head = NULL;


	pushNode(&head,1);
	pushNode(&head,11);
	pushNode(&head,12);
	pushNode(&head,5);  // call by reference
	pushNode(&head,4);
	pushNode(&head,3);
	pushNode(&head,2);
	pushNode(&head,1);
	pushNode(&head,1);
	pushNode(&head,11);
	pushNode(&head,12);
	pushNode(&head,4);


	cout << "Original List : ";

	printList(head);    // call by value

	int n= 3;

	cout << "elements after" << n << "are:" ;

//	DeleteNth(&head)

return 0;
}