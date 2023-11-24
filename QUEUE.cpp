#include<iostream>
#include"Queueheader.h"
using namespace std;
int main()
{
	cout<<"****************QUEUE IMPLEMENTATION PROGRAM******************"<<endl;
	int size;
	cout<<"enter size of queue:";
	cin>>size;
	doubleQueue d(size);
	d.ENQUEUE(5.9);
	d.ENQUEUE(12.14);
	d.DISPLAY();
	d.DEQUEUE();
	d.DISPLAY();
	return 0;
}
