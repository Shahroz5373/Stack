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
	if(isFull()){
		cout << "Stack if Full " << endl;
		return false;
	}
	else {
		arr[++tos] = element;
		return true;
	}
}

int Stack::pop(){
	if (isEmpty()) {
		cout << "Stack is Empty " << endl;
		return -1;
	}
	else {
		return arr[tos--];
	}

}

void Stack::printStack()const{
	cout << "Stack is: ";
	for (int i = 0; i <= tos; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
