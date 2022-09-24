#ifndef FUNCIONES_CANCIONES_H_INCLUDED
#define FUNCIONES_CANCIONES_H_INCLUDED
#include <iostream>
#include <cstring>
#include "claseFecha.h"
#include "clase_canciones.h"
#include "funcionesGlobales.h"

 bool altaCancion(){
 ///GARGAR REGISTRO
 ///VALIDAR REGISTRO
 ///GRABAR REGISTRO SI SE VALIDO
    Canciones objeto;

    int id, pos;
    cout<<"ID CANCION: ";
    cin>>id;
    pos=buscarIDCancion(id);
    if(pos>=0){
        cout<<"YA EXISTE ESA CANCION EN EL REGISTRO";
        return false;
    }
    objeto.Cargar();
    system("cls");
 return objeto.grabarEnDisco();
 }


#endif // FUNCIONES_CANCIONES_H_INCLUDED
