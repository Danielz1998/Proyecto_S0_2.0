#include <iostream>
#include "Lista.h"

using namespace std;

int main()
{
    Lista l;
    l.inicializar();

    int cantidad = 0;
    int opc=0;

    cout<<"\t<<Simulador SO>>";
    cout<<"\n";
    cout<<"\nEscoja una opcion:";
    cout<<"\n1.Configuracion de Procesos";
    cout<<"\n2.Definicion de Lista de Ejecucion";
    cout<<"\nOpcion:";
    cin>>opc;
    cout<<"\n";

    if(opc==1)
    {
        cout<<"\t<<Configuracion de Procesos>>";
        cout<<"\n";
        cout<<"\nIngrese la cantidad de procesos: ";
        cin>>cantidad;

        for(int i=0; i< cantidad; i++)
        {
            string u_nombre;
            int u_prioridad;
            int u_tiempo;

            cout<<""<<endl;
            cout<<"\nIngrese el nombre del proceso: ";
            cin>>u_nombre;
            cout<<"\nIngrese el nivel de prioridad del proceso: ";
            cin>>u_prioridad;
            cout<<"\nIngrese el tiempo del preceso: ";
            cin>>u_tiempo;
            cout<<""<<endl;

            Nodo * a = new Nodo(i, u_nombre, u_prioridad, u_tiempo);
        }
    };
    if(opc==2)
    {
        cout<<"\t<<Definicion de la Lista de Ejecucion>>";
        cout<<"\n";


    };
    return 0;
}
