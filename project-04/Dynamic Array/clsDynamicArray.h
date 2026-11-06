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
















};
