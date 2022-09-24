#ifndef CLASE_CANCIONES_H_INCLUDED
#define CLASE_CANCIONES_H_INCLUDED
#include <iostream>
#include <cstring>
#include "funcionesGlobales.h"
#include "claseFecha.h"

    using namespace std;

const char * archivoCANCIONES="canciones.dat";

 class Canciones{

 private:
     int IDcancion;
     char nombreCancion[30];
     char nombreAutor[30];
     int IDinterprete;
     Fecha fechaEstreno;
     bool estado;
     float duracionCancion;
     int generoCancion;

 public:
     /// SETS CANCION
    void setIDCancion(int cancion){IDcancion=cancion;}
    void setNombreCancion(const char*nom){strcpy(nombreCancion,nom);}
    void setNombreAutor (const char*aut){strcpy(nombreAutor,aut);}
    void setIDInterprete(int interprete){IDinterprete=interprete;}
    void setEstreno(Fecha estr){fechaEstreno=estr;}
    void setEstadoCancion(bool est){estado=est;}
    void setDuracionCancion(float duracion){duracionCancion=duracion;}
    void setGeneroCancion(int gen){generoCancion=gen;}
    ///GETS CANCION
    int getIDCancion(){return IDcancion;}
    const char * getNombreCancion(){return nombreCancion;}
    const char* getNombreAutor(){return nombreAutor;}
    int getIDinterprete(){return IDinterprete;}
    Fecha getFechaEstreno(){return fechaEstreno;}
    bool getEstadoCancion(){return estado;}
    float getDuracionCancion(){return duracionCancion;}
    int getGeneroCancion(){return generoCancion;}

    /// METODOS DE LA CLASE CANCION
    void Cargar();
    void Mostrar();
    bool leerEnDisco(int pos);
    bool grabarEnDisco();
    bool modificarEnDisco(int pos);
 };

 /// INICIO FUNCION CARGAR
void Canciones::Cargar(){

     int ID=0, interprete, genero;
     float duracion;
     char autor[30], nombre[30];
     bool estado;
     Fecha obj;

     ID++;
     cout<<"ID DE CANCION N°: "<<ID;

     setIDCancion(ID);
     cout<<endl;

     cout<<"NOMBRE CANCION: ";
     cargarCadena(nombre, 30);
     setNombreCancion(nombre);
     cout<<endl;
     cout<<"NOMBRE AUTOR: ";
     cargarCadena(autor,30);
     setNombreAutor(autor);
     cout<<endl;
     cout<<"ID INTERPRETE: ";
     cin>>interprete;
     setIDInterprete(interprete);
     cout<<endl;
     cout<<"FECHA ESTRENO: "<<endl;
     obj.Cargar();
     setEstreno(obj);
     cout<<endl;
     estado=true;
     setEstadoCancion(estado);
     cout<<"DURACION (MIN):";
     cin>>duracion;
     setDuracionCancion(duracion);
     cout<<endl;
     cout<<"GENERO MUSICAL: ";
     cin>>genero;
     setGeneroCancion(genero);
 }
/// INICIO FUNCION MOSTRAR
void Canciones::Mostrar(){

    Fecha obj;
     cout<<"ID CANCION: "<<IDcancion;
     cout<<endl;
     cout<<"NOMBRE CANCION: "<<nombreCancion;
     cout<<endl;
     cout<<"NOMBRE AUTOR: "<<nombreAutor;
     cout<<endl;
     cout<<"ID INTERPRETE: "<<IDinterprete;
     cout<<endl;
     cout<<"FECHA ESTRENO: ";
     obj.Mostrar();
     cout<<endl;
     cout<<"DURACION (MIN):"<<duracionCancion;
     cout<<endl;
     cout<<"GENERO MUSICAL: "<<generoCancion;
}

/// INICIO LEER DE DISCO

bool Canciones::leerEnDisco(int pos){
    FILE *p;

    p=fopen(archivoCANCIONES,"rb");
    if(p==NULL) return false;
    fseek(p, pos*sizeof(Canciones),0);
    bool leyo= fread(this, sizeof(Canciones),1,p);
    fclose(p);
    return leyo;
}

bool Canciones::grabarEnDisco(){
    FILE *p;

    p=fopen(archivoCANCIONES,"ab");
    if(p==NULL) return false;
    bool grabo=fwrite(this, sizeof (Canciones),1,p);
    fclose(p);
    return grabo;
}


  bool Canciones::modificarEnDisco(int pos){
    FILE * p;
    p=fopen(archivoCANCIONES,"rb+"); //rb+ escribe en medio del archivo
    if(p==NULL) return false;
    fseek(p,pos*sizeof(Canciones),0);
    bool modifico=fwrite(this, sizeof (Canciones),1,p);
    fclose(p);
    return modifico;
 }

int buscarIDCancion(int ID){

    Canciones objeto;
    int pos=0;

    while(objeto.leerEnDisco(pos)){
        if(objeto.getIDCancion()==ID){
            return pos;
        }
        pos++;
    }
    return -1;
}


#endif // CLASE_CANCIONES_H_INCLUDED

