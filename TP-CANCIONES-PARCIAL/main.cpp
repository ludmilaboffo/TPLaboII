#include <iostream>
#include <cstring>
#include "claseFecha.h"
#include "clase_canciones.h"
#include "libreria_menus.h"
using namespace std;

//const char * archivoCANCIONES="canciones.dat";

int main()
{

    int opcion;

    while(true){

    cout<<"MENU PRINCIPAL"<<endl;
    cout<<"------------------"<<endl;
    cout<<endl;
    cout<<"1) MENU CANCIONES"<<endl;
    cout<<"2) MENU INTERPRETES"<<endl;
    cout<<"3) MENU GENEROS"<<endl;
    cout<<"4) REPORTES"<<endl;
    cout<<"5) CONFIGURACION"<<endl;
    cout<<"--------------------------------"<<endl;
    cout<<"0) FIN DEL PROGRAMA"<<endl;
    cout<<endl;
    cout<<"SELECCIONE UNA DE LAS OPCIONES: ";
    cin>>opcion;
    system("cls");
        switch(opcion){
        case 1:
            menuCanciones();
            system("cls");
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 0:
            break;
        }
    }

    return 0;
}
