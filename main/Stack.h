#pragma once

class Stack
{
private:
	int tos;
	int size;
	int* arr;

public:
	Stack();
	Stack(const int&);

	bool push(const int&);
	int pop();

	bool isEmpty()const { return(tos==-1); }
	int getTos()const { return tos; }
	void printStack()const;

	~Stack() { delete[]arr;}
};

