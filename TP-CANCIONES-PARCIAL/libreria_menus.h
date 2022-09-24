#ifndef LIBRERIA_MENUS_H_INCLUDED
#define LIBRERIA_MENUS_H_INCLUDED
#include <iostream>
#include <cstring>
#include "clase_canciones.h"
#include "funcionesGlobales.h"
#include "funciones_canciones.h"


    using namespace std;

void menuCanciones(){

    int opcion;
    bool salir=false;

    while(salir==false){
    cout<<"    MENU CANCIONES"<<endl;
    cout<<"------------------"<<endl;
    cout<<endl;
    cout<<"1) AGREGAR CANCION"<<endl;
    cout<<"2) LISTAR CANCION POR ID"<<endl;
    cout<<"3) LISTAR TODAS LAS CANCIONES"<<endl;
    cout<<"4) MODIFICAR FECHA DE ESTRENO"<<endl;
    cout<<"5) ELIMINAR CANCION"<<endl;
    cout<<"--------------------------------"<<endl;
    cout<<"0) VOLVER AL MENU PRINCIPAL"<<endl;
    cin>>opcion;
    system("cls");

        switch(opcion){
    case 1: // ALTA CANCION
        break;
    case 2:
        //listar cancion por ID
        break;
    case 3:
        //listar todas las canciones
        break;
    case 4:
        //modificar fecha de estreno
        break;
    case 5: //eliminar cancion;
        break;
    case 0:
        cout<<"Retorno al menu principal";
        system("cls");
            salir=true;
            break;
        }
    }
}

#endif // LIBRERIA_MENUS_H_INCLUDED
