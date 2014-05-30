#include <iostream>
#include <conio.h>
using namespace std;


class Node {
    int data;   //private instance variable for Node class
    Node* next;

  public:    // public member functions
    Node() {}; 
    void set_data(int sdata) { data = sdata; };
    void set_next(Node* aNext) { next = aNext; };
    int Data() { return data; };
    Node* Next() { return next; };
};


class linkedlist {
    Node *head;       ////private instance variable for Node class pointer for linkedlist creation
  public:
    linkedlist() { head = NULL; };
    void print_data();
    void add_tail(int data);
    void delete_node(int data);
};


void linkedlist::print_data() 
{

    Node *temp = head;

    // No nodes
    if ( temp == NULL ) {
    cout << "empty list";;
    return;
    }


    if ( temp->Next() == NULL ) {
    cout << temp->Data() << "->" << "NULL\n";

    }
    else 
    {
         while(temp != NULL)
         {
          cout << temp->Data() << "->";
          temp = temp->Next();
         }

    }
}


void linkedlist::add_tail(int data) 
{

    Node* new_node = new Node();  // newnode creation
    
    new_node->set_data(data);  // data set
    new_node->set_next(NULL);  // set to null  node->next = NULL


    Node *temp = head;

    if ( temp != NULL ) {

    while ( temp->Next() != NULL ) {
        temp = temp->Next();
    }


    temp->set_next(new_node);
    }
    else {
    
    head = new_node;
    }
}


void linkedlist::delete_node(int data) {


    Node *temp = head;


    if ( !temp  )
    return;


    if ( temp->Next() == NULL ) {
    delete temp;
    head = NULL;
    }
    else {

    Node *previous;
    
    while(temp != NULL)
    {
        if ( temp->Data() == data ) break;
        previous = temp;
        temp = temp->Next();
    } 


    previous->set_next(temp->Next());


    delete temp;
    }
}

int main()
{
    
    linkedlist list_1;

    
    list_1.add_tail(67);
    list_1.add_tail(68);
    list_1.add_tail(69);
    list_1.print_data();
    cout << "\nDeleting 68" << endl;
    list_1.delete_node(68);
    list_1.print_data();
    
    cout << "\n   Another list" << endl;
  
  linkedlist list_2;  
    list_2.add_tail(1);
    list_2.print_data();
    cout << "Inserting 2";
    list_2.add_tail(2);
    cout << "Inserting 3\n";
    list_2.add_tail(3);  
    list_2.print_data();
    cout << "Deleting 2" << endl;
    list_2.delete_node(2);
    list_2.print_data();


    
    
    getch();
}
