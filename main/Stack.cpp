#include<iostream>
using namespace std;
#include "Stack.h"

Stack::Stack(){
	tos = -1;
	size = 10; // makes default size of stack as 10
	arr = new int[size]; 
}
Stack::Stack(const int& _size){
	tos = -1;
	size = _size; // makes the size as required by user
	arr = new int[size];
}

bool Stack::push(const int&element){
	if((size-tos)>1){
		arr[++tos] = element;
		return true;
	}
	else {
		return false;
	}
}

int Stack::pop(){
	if (isEmpty() == false) {
		return arr[tos--];
	}
	else {
		return -1;
	}

}

void Stack::printStack()const{
	cout << "Stack is: ";
	for (int i = 0; i <= tos; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
