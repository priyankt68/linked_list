/*Printing a given linkedlist*/

#include <iostream>
using namespace std;

void push(struct node** , int );
void printList(struct node*);

//Structure for the linked list
struct node {

int data;
struct node* next;
};

void printList(struct node *node)
{

	while(node!=NULL)
	{
		cout << node->data<<endl;
		node=node->next;
	}

}

void push(struct node** headref, int new_data)
{

	struct node* new_node = new node;
	new_node->next = (*headref);
	new_node->data = new_data;
	(*headref) =  new_node;

}

int main()
{

	struct node *head = NULL;

	push(&head,1);  // call by address
	push(&head,2);
	push(&head,3);
	push(&head,4);

	printList(head);  // call by value


	return 0;
}