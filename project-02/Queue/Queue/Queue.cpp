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




	system("pause");
	return 0;
}

