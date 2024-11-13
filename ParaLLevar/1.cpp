/*
// Materia: Programación I, Paralelo 1
// Autor: Ignacio Joel Durán Choque
// Fecha creación: 13/11/2024
// Número de ejercicio: 1
// Problema planteado: 1. Registro de una biblioteca
Descripción: Define una estructura llamada Libro con los siguientes campos:
• titulo (cadena de caracteres)
• autor (cadena de caracteres)
• anio_publicacion (entero)
• disponible (booleano, que indica si el libro está disponible o no)
Escribe un programa que permita al usuario registrar los datos de 1 libros, y luego
muestre los datos del libro, indicando si está o no disponible.
*/
#include <iostream>
#include <string>

using namespace std;

struct LIBRO
{
    char titulo[50];
    char autor[30];
    int anio_publicacion;
    bool disponible;
};

void IngresarLibro (LIBRO &libro1);
void MostrarLibro (LIBRO libro1);
void Disponible (LIBRO libro1);


int main()
{
    LIBRO libro1;
    cout<<"INGRESE LOS DATOS DEL LIBRO: "<<endl;
    IngresarLibro(libro1);
    MostrarLibro(libro1);
    Disponible(libro1);
    return 0;
}

void IngresarLibro (LIBRO &libro1){
    int ans=0;
    cout<<"INGRESE EL TÍTULO"<<endl;
    cin.getline(libro1.titulo, 50);
    cout<<"INGRESE EL AUTOR"<<endl;
    cin.getline(libro1.autor, 30);
    cout<<"INGRESE EL AÑO DE PUBLICACIÓN"<<endl;
    cin>>libro1.anio_publicacion;
    cin.ignore();
    do{
        cout<<"ESTÁ DISPONIBLE?(1.SI/2.NO)"<<endl;
        cin>>ans;
    }while(ans!=1 && ans!=2);
    if(ans==1){libro1.disponible=true;}
    else{libro1.disponible=false;}
}

void MostrarLibro (LIBRO libro1){
    cout<<"TITULO: "<<libro1.titulo<<endl;
    cout<<"AUTOR: "<<libro1.autor<<endl;
    cout<<"AÑO DE PUBLICACIÓN: "<<libro1.anio_publicacion<<endl;
    cout<<"DISPONIBLE: ";
    if(libro1.disponible) cout<<"SÍ"<<endl;
    else cout<<"NO"<<endl;
}

void Disponible (LIBRO libro1){
    if(libro1.disponible) cout<<"SÍ, SÍ ESTÁ DISPONIBLE"<<endl;
    else cout<<"NO, NO ESTÁ DISPONIBLE"<<endl;
}