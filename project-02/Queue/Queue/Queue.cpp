#include <iostream>
#include"clsMyQueue.h"
using namespace std;
int main()
{
	clsMyQueue<int>MyQueue;
	MyQueue.Push(10);
	MyQueue.Push(20);
	MyQueue.Push(30);
	MyQueue.Push(40);



	cout << "\nContant Of Queue : \n";
	MyQueue.Print();
	cout << "\nQueue Size: "<<MyQueue.Size()<<endl;
	cout << "\nQueue Front: "<<MyQueue.Front()<<endl;
	cout << "\nQueue Back: "<<MyQueue.Back()<<endl;
	MyQueue.Pop();

	cout << "\nAfter Pop : ";
	MyQueue.Print();
	cout << "\n\nItem(2) : " << MyQueue.GetItem(2) << endl;
	MyQueue.Reverse();
	MyQueue.Print();
	MyQueue.Update(2, 200);
	MyQueue.Print();
	cout << "\nInsert after : \n";
	MyQueue.InsertAfter(2, 300);
	MyQueue.Print();

	cout << "\nInsert Front : \n";
	MyQueue.InsertAtFront(5);
	MyQueue.Print();
	cout << "\nInsert Back : \n";
	MyQueue.InsertAtBack(400);
	MyQueue.Print();
	//MyQueue.Clear();
	if (MyQueue.IsEmpty()) 
		cout << "Yes"<<endl;
	else 
		cout << "No"<<endl;







	system("pause");
	return 0;
}

