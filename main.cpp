#include<iostream>
#include"arreglo.h"

using namespace std;


int main(){

    ArregloDinamico<string> arreglo;

    arreglo.insertar_final("Memoria dinamica");
    arreglo.insertar_final("Templates");
    arreglo.insertar_inicio("Sobre carga de operadores");
    arreglo.insertar_inicio("Lecura de archivos");
    arreglo.insertar("Prueba del metodo insertar",2);


    cout<<endl;
    for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout<<arreglo[i]<<" | ";
    }
    
    return 0;
}