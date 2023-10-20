#include<iostream>
#include"Linkedlist.h"
using namespace std;
int main()
{
	Linkedlist list;
	list.insert_at_tail(14);
	list.insert_at_head(5);
	list.insert_at_head(26);
	list.insert_after(26,9);
	list.insert_before(5,12);
	list.traverse_list();
	return 0;

	
}
