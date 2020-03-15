#include "LinkedList.h"

int main()
{
	/* Linked list½m²ß */
	LinkedList list;
	list.Push_back(0);
	list.Push_back(4);
	list.Push_back(1);
	list.Push_back(8);
	list.Push_front(4);
	list.Push_front(8);
	list.PrintList();
	list.Delete(0);
	list.PrintList();
	list.Reverse();
	list.PrintList();
	list.Clear();
	list.PrintList();
	system("pause");
}