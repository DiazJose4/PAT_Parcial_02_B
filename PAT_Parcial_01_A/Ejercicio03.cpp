#include "Ejercicio03.h"

MinStack::MinStack()
{
	Stack = nullptr;
	minStac = nullptr;
}

void MinStack::push(int value)//Agrega
{
	Node* nuevo_nodo = new Node();
	nuevo_nodo->data = value;
	nuevo_nodo->next = nullptr;
	minStac = nuevo_nodo;

	//Node* aux = header;

	if (minStac == nullptr || value<minStac->data) 
	{
		Node* nuevp_min = new Node();
		nuevp_min->data = value;
		nuevp_min->next = minStac;
		minStac = nuevp_min;
	}
	//else {
		//while (aux->next != nullptr) {
			//aux = aux->next;
		//}
		//aux->next = nuevo_nodo;
	//}
}

void MinStack::pop()//Elimina ultimo en ser agregado
{
	if (Stack != nullptr) {
		if (Stack ->data == minStac->data) {
			Node* mem = minStac;
			minStac = minStac->next;
			delete mem;
		}
		Node* mem = Stack;
		Stack = Stack->next;
		delete mem;
	}
}

int MinStack::top()//Retorna ultimo agregado sin eliminar
{
	if (Stack != nullptr)
	{
		return Stack->data;
	}
	return -1;
}

int MinStack::getMin()//Retorna el menor
{
	if (minStac!=nullptr)
	{
		return minStac->data;
	}
	return -1;
}
