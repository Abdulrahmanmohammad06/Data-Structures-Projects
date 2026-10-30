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
}

