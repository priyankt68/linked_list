/*Program to swap alternate nodes in a given linked list

1.	in:	1-2-3-4-5
1.	out:2-1-4-3-5

2.	in: 1-2-3-4-5-6
2.	out:2-1-4-3-6-5

*/


#include <iostream>
using namespace std;


void pushNode(struct node** , int );
void printList(struct node*);
void SwapAlternateElements(struct node*);

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


void SwapAlternateElements(struct node **head)
{
	if (*head == NULL || *(head) -> next == NULL)
		return ;

	struct node *pre = **head;
	struct node *cur = *head;

	*head = cur;

	while(true)




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

	SwapAlternateElements(head);


return 0;
}