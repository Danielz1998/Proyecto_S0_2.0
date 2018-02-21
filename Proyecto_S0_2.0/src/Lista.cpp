#include "Lista.h"

void Lista::inicializar()
{
    primernodo = NULL;
    ultimonodo = NULL;
}

bool Lista::vacia()
{
    if (primernodo == NULL && ultimonodo == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int Lista::tamano()
{
    int cont = 0;

    Nodo * aux;
    aux = primernodo;
    while(aux != NULL)
    {
        cont++;
        aux = aux -> sig;
    }
    return cont;
}

void Lista::mostrar()
{
    Nodo *aux;
    aux = primernodo;
    while(aux != NULL)
    {
        cout<<aux->nombre<<endl;
        aux = aux ->sig;
    }
}

void Lista::insertar(Nodo * nuevo)
{
    if(vacia())
        {
            primernodo = nuevo;
            ultimonodo = nuevo;
        }
        else
        {
            ultimonodo -> siguiente = nuevo;
            nuevo -> anterior = ultimonodo;
            ultimonodo = nuevo;
        }
}
