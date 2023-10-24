#pragma once
class MinStack
{
private:
	struct Node
	{
		int data;
		Node* next;
	};

	Node* Stack;
	Node* minStac;
	Node* header = nullptr;
	int minimo;
	int Prueba2;

public:
	MinStack();

	void push(int value);//Agrega

	void pop();//Elimina ultimo en ser agregado

	int top();//Retorna ultimo agregado sin eliminar

	int getMin();//Retorna el menor
};

