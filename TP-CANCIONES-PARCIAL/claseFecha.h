#ifndef CLASEFECHA_H_INCLUDED
#define CLASEFECHA_H_INCLUDED
#include "funcionesGlobales.h"
#include <iostream>

/*
3. Hacer una clase de nombre Fecha con las siguientes propiedades:
Día
Mes
Año
Y los siguientes métodos:
Cargar()
Mostrar()
gets() para todas las propiedades
sets() para todas las propiedades
Un constructor con valores por omisión para los parámetros.
*/
 using namespace std;

 class Fecha{

    private:

    int dia;
    int mes;
    int anio;

    public:
    void Cargar();
    void Mostrar();

    ///sets
    void setDia(int elDia){dia=elDia;}
    void setAnio(int elAnio){anio=elAnio;}
    void setMes(int elMes){ mes=elMes;}
    /// gets
    int getMes(){return mes;}
    int getAnio(){return anio;}
    int getDia(){return dia;}

    ///constructor

     Fecha(int d=0, int m=0, int a=0){
        dia=d;
        mes=m;
        anio=a;
    }
 };


void Fecha::Cargar(){
    int m, a, d;

    cout<<"DIA: ";
    cin>>d;
    setDia(d);
    cout<<"MES: ";
    cin>>m;
    setMes(m);
    cout<<"ANIO: ";
    cin>>a;
    setAnio(a);
 }


 void Fecha::Mostrar(){
    cout<<getDia()<<"/"<<getMes()<<"/"<<getAnio()<<endl;
 }


#endif // CLASEFECHA_H_INCLUDED
