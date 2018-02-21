#ifndef LISTA_H
#define LISTA_H
#include <iostream>

using namespace std;

class Nodo
{
    public:
    int procesoID;
    string nombre;
    int prioridad;
    int tiempo;

    Nodo * sig;
    Nodo * ant;

        Nodo (int cprocesoID, string cnombre, int cprioridad, int ctiempo)
    {
        procesoID = cprocesoID;
        nombre = cnombre;
        prioridad = cprioridad;
        tiempo = ctiempo;
        estado = cestado;
    }

    friend class Lista;
};

class Lista
{
    Nodo * primernodo;
    Nodo * ultimonodo;

public:
    void inicializar();
    bool vacia();
    int tamano();
    void mostrar();
    void insertar(Nodo * nuevo);



};

#endif // LISTA_H
