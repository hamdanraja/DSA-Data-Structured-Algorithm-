#include<iostream>
using namespace std;
class Intstack//stackclass
{
	private:	
		int *stackArray;
		int stackSize;
		int top;
	
	public:
	Intstack(int size)//constructor
	{
		stackArray=new int(size);
		stackSize=size;
		top=-1;
		
	}
	~ Intstack()//destructor
		{
			delete [] stackArray;
		}	
			
		bool IsFull()
		{
			if(top==stackSize-1)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
			bool IsEmpty()
		{
			if(top==-1)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		void PUSH(int value)
		{
			if(IsFull())
			{
				cout<<"stack is overflow"<<endl;
			}
			else
				{
					top++;
					stackArray[top]=value;
				}
			
		}
		void POP()//pop fun
		{
			if(IsEmpty())
			{
				cout<<"Stack is underflow"<<endl;
			}
			else
			{
				cout<<stackArray[top]<<"value is pop out from stack"<<endl;
				top--;
			}
		}
		void Display()//display fun
		{
			if(IsEmpty())
			{
				cout<<"stack is underflow"<<endl;
				
			}
			else
			{
				for(int i=top;i>=0;i--)
				{
					cout<<stackArray[i]<<" "<<endl;
				}
			}
		}
};
