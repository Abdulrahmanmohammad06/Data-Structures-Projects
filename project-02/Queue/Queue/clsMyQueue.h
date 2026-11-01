#pragma once
#include<iostream>
#include"clsDblLinkedList.h"

using namespace std;
template <typename T>
class clsMyQueue
{
protected:
	clsDblLinkedList<T>_MyList;
public:
	void Push(T value) {
		_MyList.InsertAtEnd(value);
	}
	void Print() {
		_MyList.PrintList();

	}
	int Size() {
		return _MyList.Size();
	}
	T Front() {
		return _MyList.GetItem(0);
	}
	T Back() {
		return _MyList.GetItem(_MyList.Size() - 1);
	}
	void Pop() {
		_MyList.DeleteFirstNode();
	}
	bool IsEmpty() 
	{
		return _MyList.IsEmpty();
	}






};

