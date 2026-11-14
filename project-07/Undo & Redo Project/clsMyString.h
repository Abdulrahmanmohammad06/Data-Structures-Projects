#pragma once
#include<iostream>
#include<stack>
using namespace std;
class clsMyString {
private:
	stack<string>_Undo;
	stack<string>_Redo;
	string _value;
public:
	void Set(string value)
	{
		_Undo.push(_value);
		_value = value;
	
	}
	string Get() {
		return _value;
	}

 __declspec(property(get = Get, put = Set)) string Value;
 void Undo() {
	 _Redo.push(_value);
	 _value = _Undo.top();
	 _Undo.pop();
  }






};
