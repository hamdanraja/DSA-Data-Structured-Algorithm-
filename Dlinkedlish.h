#include<iostream>
using namespace std;
#include"Dnode.h"
class Dlinkedlist
{

		private:
			Dnode*head;
			Dnode*tail;
			public:
				Dlinkedlist()
				{
					head=0;
					tail=0;
					
				}
		
		// Empty Function:
	
				bool isEmpty()
				{
					if(head==0 && tail==0)
					{
						return true;
					}
					else
					{
						return false;
					}
				}
				void insertathead(double value)
				{
					Dnode* newnode=new Dnode(value);
					if(isEmpty())
					{
						head=tail=newnode;
						
					}
					else
					{
						newnode->next=head;
						head->prev=newnode;
						head=newnode;
					}
				}
				void insertattail(double value)
				{
		        	Dnode* newnode=new Dnode(value);

					if(isEmpty())
					{
						head=tail= newnode;
					}
					else
					{
					 newnode->prev=tail;
					 tail->next=newnode;
					 tail=newnode;	
					}
				}
				void insertafter(double existing,double value)
				{
					if(isEmpty())
					{
						cout<<"list is empty"<<endl;
						
					}
					else if(tail->data==existing)
					{
						insertattail(value);
					}
					else
					{
						Dnode*curr=head;
						while(curr!=0&& curr->data!=existing)
						{
							curr=curr->next;
						}
						if(curr == 0)
						{
							cout<<"value not found"<<endl;
						}
						else
						{
							Dnode*newnode=new Dnode(value);
							newnode->next=curr->next;
							newnode->prev=curr;
							curr->next=newnode;
						}
					}
				}
				void insertbefore(double existing,double value)
				{
					if(isEmpty())
					{
						cout<<"list is empty"<<endl;
					}
					else if(head->data==existing)
					{
						insertathead(value);
					}
					else
					{
						Dnode*curr=head;
						while(curr!=0&& curr->data!=existing)
						{
							curr=curr->next;
						}
						if(curr == 0)
						{
							cout<<"value not found"<<endl;
						}
						else
						{
							Dnode*newnode=new Dnode(value);
							newnode->prev=curr;
							curr->next->prev=newnode;
						}
					}
				
				}
				void deletefromhead()
				{
					if(isEmpty())
					{
						cout<<"list is empty"<<endl;
					}
					else
					{
						Dnode*delnode=head;
						head->next->prev=0;
						head=head->next;
						delnode->next=0;
						delete delnode; 
					}
				}
				void deletefromtail()
				{
					if(isEmpty())
					{
						cout<<"list is empty"<<endl;
					}
						else
					{
						Dnode*delnode=tail;
						tail->prev->next=0;
						tail=tail->next;
						delnode->prev=0;
						delete delnode; 
					}
				}
				void deletespecific(double existing)
				{
					if(isEmpty())
					{
						cout<<"list is empty"<<endl;
					}
					else if(head->data==existing)
					{
						deletefromhead();
					}
					else if(tail->data=existing)
					{
						deletefromtail();
					}
					else
					{
						Dnode* curr=head->next;
						while(curr!=0 && curr->data!=existing)
						{
							curr=curr->next;
						}
						if(curr == 0)
						{
							cout<<"value not in list"<<endl;
						}
					
					else
					{
						curr->prev->next=curr->next;
						curr->next->prev=curr->prev;
						curr->next  = 0;
						curr->prev  = 0;
						delete curr;
					}
				}
			}
					void forward_traverse()
				{
					if(isEmpty())
					{
						cout<<"list is empty"<<endl;
						
					}
					else
					{
						cout<<"list has values"<<endl;
						Dnode* curr=head;
						while(curr!= 0)
						{
							cout<<curr->data<<endl;
							curr=curr->next;
						}
					}
				}
				void reverse_traverse()
				{
					if(isEmpty())
					{
						cout<<"list is empty"<<endl;
						
					}
					else
					{
						cout<<"list has values"<<endl;
						Dnode* curr=tail;
						while(curr!= 0)
						{
							cout<<curr->data<<endl;
							curr=curr->prev;
						}
					}
				}
				
};
