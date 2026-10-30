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

	clsDblLinkedList<int>::Node* N1=MydblLinkedList.Find(10);
	if(N1!=NULL)
	{
		cout << "Founded\n";
	}
	else
	{
		cout << "Not Found \n";
	}



}

