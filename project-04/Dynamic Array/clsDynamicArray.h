#pragma once		 
#include <iostream>
#include<map>
using namespace std;
template <typename T>
class clsDynamicArray {
protected:
	int _Size = 0;
	T* _TempArray;
public:
	T* OriginalArray;

	clsDynamicArray(int size=0)
	{
	
		if (size < 0)
			size = 0;
		_Size =size;

		 OriginalArray = new T[_Size];
	
	}
	~clsDynamicArray()
	{
	
		delete [] OriginalArray;
	}
	bool SetItem(int index,T value)
	{
		if (index >= _Size || index < 0) {
			return 0;
		}
		OriginalArray[index] = value;
		return 1;
	}
	int Size() {
		return _Size;
	}
	bool IsEmpty() {

		if (_Size == 0) {
			return 1;
		}
		else
			return 0;


	}		  
	void PrintList() {
		for (int i = 0; i <_Size; i++) {
			cout << OriginalArray[i] << " ";
		}
		cout << endl;
	}
	void Resize(int NewSize)
	{

		if (NewSize < 0)
		{
			NewSize = 0;
		};

		_TempArray = new T[NewSize];

		if (NewSize < _Size)
			_Size = NewSize;

		for (int i = 0; i < _Size; i++)
		{
			_TempArray[i] = OriginalArray[i];
		}

		_Size = NewSize;

		delete[] OriginalArray;
		OriginalArray = _TempArray;

	}
	T GetItem(int index)
	{
		return OriginalArray[index];
	}
	void  Reverse()
	{

		_TempArray = new T[_Size];

		int counter = 0;

		for (int i = _Size - 1; i >= 0; i--)
		{
			_TempArray[counter] = OriginalArray[i];
			counter++;
		}

		delete[] OriginalArray;
		OriginalArray = _TempArray;

	}
	void Clear()
	{
		_Size = 0;
		_TempArray = new T[0];
		delete[] OriginalArray;
		OriginalArray = _TempArray;
	}
	bool DeleteItemAt(int index)
	{

		if (index >= _Size || index < 0)
		{
			return false;
		}

		_Size--;

		_TempArray = new T[_Size];

		
		for (int i = 0; i < index; i++)
		{
			_TempArray[i] = OriginalArray[i];
		}

		
		for (int i = index + 1; i < _Size + 1; i++)
		{
			_TempArray[i - 1] = OriginalArray[i];
		}

		delete[] OriginalArray;
		OriginalArray = _TempArray;
		return true;

	}
	void DeleteFirstItem()
	{
		DeleteItemAt(0);
	}
	void DeleteLastItem()
	{
		DeleteItemAt(_Size - 1);
	}
	T Find(T value) {
		for (int i = 0; i < _Size; i++) {
			if (OriginalArray[i] == value) {
				return i;
			}
		}
		return -1;
	}
	bool DeleteItem(T value) {
		int index = Find(value);
		if (index == -1) {
			return false;
		}
		
		DeleteItemAt(index);
	    return true;	
		
	}
	bool InsertAt(T index, T value) {

		if (index > _Size || index < 0)
		{
			return false;
		}

		_Size++;

		_TempArray = new T[_Size];

		for (int i = 0; i < index; i++)
		{
			_TempArray[i] = OriginalArray[i];
		}

		_TempArray[index] = value;

		for (int i = index; i < _Size - 1; i++)
		{
			_TempArray[i + 1] = OriginalArray[i];
		}

		delete[] OriginalArray;
		OriginalArray = _TempArray;
		return true;

	}
	void InsertAtBeginning(T value)
	{

		InsertAt(0, value);

	}
	bool InsertBefore(T index, T value)
	{
		if (index < 1)
			return InsertAt(0, value);
		else
			return InsertAt(index - 1, value);

	}
	bool InsertAfter(T index, T value)
	{
		if (index >= _Size)
			return InsertAt(_Size - 1, value);
		else
			return InsertAt(index + 1, value);

	}
	bool InsertAtEnd(T value)
	{

		return InsertAt(_Size, value);

	}


};
