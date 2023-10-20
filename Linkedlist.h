#include<iostream>
#include"Node.h"
using namespace std;

class Linkedlist
{
	private:
		Node *head;
		Node *tail;
		
	public:
		
		Linkedlist() //Constructor
		{
			head=0;
			tail=0;
		}
		
		// Insert Functions:
		void insert_at_head (double value);
		void insert_at_tail (double value);
		void insert_after (double existing , double value);
		void insert_before (double existing , double value);
		
		// Delete Functions:
		void delete_from_head ();
		void delete_from_tail ();
		
		// Delete Node Function:
		void delete_node (double value);
		
		// Traverse Function:
		void traverse_list ();
		
		// Empty Function:
		bool Is_empty ();
};

// Functions Definition:

// 1. Is Empty:
bool Linkedlist::Is_empty()
{
	if (head==0 && tail==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

// 2. Insert At Head:
void Linkedlist::insert_at_head(double value)
{
	Node *newNode = new Node(value);
	
	// case 1: List is empty
	if(head==0 && tail==0)
	{
		head= tail = newNode;
	}
	
	//case 2: List has values
	else
	{
		newNode->next = head;
		head = newNode;
	}

}

// 3. Insert At Tail:
void Linkedlist::insert_at_tail(double value)
{
	Node *newNode = new Node(value);
	
	// case 1: List is empty
	if(head==0 && tail==0)
	{
		head= tail = newNode;
	}
	
	//case 2: List has values
	else
	{
		tail->next = newNode;
		tail = newNode;
	}
}

// 4. Insert After:
void Linkedlist::insert_after(double existing , double value)
{
	// case 1: List is empty
	if (Is_empty())
	{
		cout<<" List is empty ! "<<endl;
	}
	
	// case 2: List has values
	else if(existing==tail->data)
	{
		insert_at_tail(value);
	}
	else
	{
		Node *current_node= head;
		while (current_node!=0 && current_node->data!=existing)
		{
			current_node = current_node->next;  
		}
		if(current_node==0)
		{
			cout<<" Existing value is not in the list: "<<endl;
		}
		else
		{
			Node *newNode = new Node(value);
			newNode->next = current_node->next;
			current_node->next = newNode;
		}
	}
}


// 5. Insert Before:
void Linkedlist::insert_before(double existing , double value)
{
   //case 1: List is empty
   if(Is_empty())
   {
   	cout<<" list is empty! "<<endl;
   }
   
   // case 2: List ahs values
   else if(existing == head->data)
   {
   	insert_at_head(value);
   }
   
   else
   {
   	Node *previous_node=0;
   	Node *current_node=head;
   	while (current_node!=0 && current_node->data!= existing)
   	   {
   		previous_node=current_node;
   		current_node=current_node->next;
	   }
	if(current_node==0)
	{
		cout<<" Existing value is not in the list "<<endl;
	}
	else
	{
		Node *newNode=new Node(value);
		newNode->next=current_node;
		previous_node->next=newNode;
	}
   }
   
}

// 6. Traverse Function:
void Linkedlist::traverse_list()
{
	// case 1: List is empty
	if(Is_empty())
	{
	  	cout<<" List is empty! "<<endl;
	}
	else
	{
		cout<<" Values in the list are: "<<endl;
		Node *current_node=head;
		while(current_node!=0)
		{
			cout<< current_node->data<<endl;
			current_node=current_node->next;
		}
	}
}
