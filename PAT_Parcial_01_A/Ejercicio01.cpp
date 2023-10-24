#include "Ejercicio01.h"

Node<char>* Ejercicio01::remove(Node<char>* head)
{
    Node<char>* Actual = head;
    Node<char>* Atras = nullptr;
    Node<char>* Repetido = nullptr;
    int count = 0;

    //Recorrer lista
    while (Actual)
    {
        int SiReptedido = 0;
        Node<char>* Actualnext = Actual->next;
        if (Actualnext && Actual->value == Actualnext->value)
        {
            SiReptedido = 1;
            Repetido = Actualnext;

            //Limpiando Mem
            //while (Repetido &&Actual->value == Repetido->value)
            //{
            //    Node<char> Mem = Repetido;

            //}
        }

        if (SiReptedido) {
            if (Atras) {
                Atras->next = Repetido;
                delete Actual;
                Actual = Repetido;  
            }
            else {
                head = Repetido;
                delete Actual;
                Actual = Repetido;  
            }
        }
        else {
            Atras = Actual;
            Actual = Actual->next;
        }
    }
    return head;
}

