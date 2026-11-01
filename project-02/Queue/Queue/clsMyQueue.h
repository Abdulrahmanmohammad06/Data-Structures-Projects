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
	T GetItem(T item) {
		return _MyList.GetItem(item);
	}
	void Reverse() {
		_MyList.Reverse();
	}
	void Update(int index,T newValue) {
		_MyList.UpdateItem(index, newValue);
	}
	void InsertAfter(int Index, T value) {
		_MyList.InsertAfter(Index, value);
	}
	void InsertAtFront(T value) {
		_MyList.InsertAtBeginning(value);
	}
	void InsertAtBack(T value) {
		_MyList.InsertAtEnd(value);

	}
	void Clear() {
		_MyList.Clear();
	}








};

