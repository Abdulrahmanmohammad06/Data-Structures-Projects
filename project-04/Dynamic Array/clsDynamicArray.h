#pragma once		 
#include <iostream>
#include<map>
using namespace std;
template <typename T>
class clsDynamicArray {
protected:
	int _size = 0;
public:
	T* Originalarray;

	clsDynamicArray(int size=0)
	{
	
		if (size < 0)
			size = 0;
		 _size =size;

		Originalarray = new T[size];
	
	}
	~clsDynamicArray()
	{
	
		delete [] Originalarray;
	}
	bool SetItem(int index,T value)
	{
		if (index >= _size || index < 0) {
			return 0;
		}
		Originalarray[index] = value;
		return 1;
	}
	int Size() {
		return _size;
	}
	bool IsEmpty() {

		if (_size == 0) {
			return 1;
		}
		else
			return 0;


	}		  
	void Print() {
		for (int i = 0; i <_size; i++) {
			cout << Originalarray[i] << " ";
		}
		cout << endl;
	}















};
