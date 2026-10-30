#include <iostream>
#include"clsDblLinkedList.h"
using namespace std;

int main()
{
   
	clsDblLinkedList<int>	MydblLinkedList;
	MydblLinkedList.InsertAtBeginning(30);
	MydblLinkedList.InsertAtBeginning(20);
	MydblLinkedList.InsertAtBeginning(10);
	MydblLinkedList.PrintList();

	clsDblLinkedList<int>::Node* N1=MydblLinkedList.Find(30);
	if(N1!=NULL)
	{
		cout << "Founded\n";
	}
	else
	{
		cout << "Not Found \n";
	}
	MydblLinkedList.InsertAfter(N1,40);
	cout << "\nList After Insert :\n";
	MydblLinkedList.PrintList();

	MydblLinkedList.InsertAtEnd(50);
	MydblLinkedList.InsertAtEnd(60);
	MydblLinkedList.InsertAtEnd(70);
	cout << "\nList After InsertAtEnd :\n";
	MydblLinkedList.PrintList();







}

