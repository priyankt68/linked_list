/*
You have two numbers represented by a linked list, where each node contains a single digit. 
The digits are stored in reverse order, such that the 1’s digit is at the head of the list. 
Write a function that adds the two numbers and returns the sum as a linked list.
*/
#include <iostream>
using namespace std;


void pushNode(struct node** , int );
void printList(struct node*);
struct node* NumAdd(struct node *,struct node*);

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

int reverse(int n)
{	
	int rev =0;
	while(n!=0)
	{
		rev = rev*10 + (n%10) ;
		n /= 10;
	}

	return rev;
}

struct node* NumAdd(struct node *head1,struct node *head2)
{


	struct node* head3 = NULL;  // Header for the resultant array.

	/*Forming number out of the first linked list*/
	int num1=0;int num2 = 0;
	while ( head1 != NULL )
	{
		num1 = (num1*10) + (head1 -> data);
		head1 = head1 -> next;
	}

	

	
	/*Similarly for other number as well*/
	while ( head2 != NULL )
	{
		num2 = (num2*10) + (head2 -> data);
		head2 = head2 -> next;
	}

		int result = reverse(num1) + reverse(num2);

		cout << result ;

		/*Creating the third linkedlist*/
		while(result != 0)
		{
		pushNode(&head3,result % 10);
		result /= 10;
		}

		return head3;
}


int main()
{

	struct node* head1 = NULL;
	struct node* head2 = NULL;

	pushNode(&head1,3);   /*Number 1 : */
	pushNode(&head1,1);
	pushNode(&head1,5);  // call by reference
	pushNode(&head2,4);
	pushNode(&head2,3);
	pushNode(&head2,9);
	


	cout << "Original List 1 : ";

	printList(head1);    // call by value

	cout << "\n Original List 2 : ";

	printList(head2);    // call by value

	struct node* head3 = NumAdd(head1,head2);

	printList(head3);    // call by value		

return 0;
}