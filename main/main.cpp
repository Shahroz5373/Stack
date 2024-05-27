#include<iostream>
using namespace std;
#include"Stack.h"


int main() {
	Stack stack;
	stack.push(9);
	stack.push(4);
	stack.push(2);
	stack.push(8);
	cout << "Before poping ";
	stack.printStack();
	stack.pop();
	stack.pop();
	cout << "After poping ";
	stack.printStack();

	return 0;
}
