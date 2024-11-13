/*
// Materia: Programación I, Paralelo 1
// Autor: Ignacio Joel Durán Choque
// Fecha creación: 13/11/2024
// Número de ejercicio: 1
// Problema planteado: 3. Estudiantes de Programación I:
Descripción: Desarrolle una estructura que guarde los datos de los n alumnos de
la materia Programación I y los muestres por pantalla, la estructura debe tener los
siguientes datos:
• cedula (entero)
• nombre (cadena de caracteres)
• apellido (cadena de caracteres)
• edad (entero)
• profesión (cadena de caracteres)
• lugar_nacimiento (cadena de caracteres)
• dirección (cadena de caracteres)
• teléfono (entero)

*/
#include <iostream>
#include <vector>

using namespace std;

struct alumnos
{
    unsigned int CI[30];
    char nombre[30];
    char apellido[30];
    int edad;
    char profesion[40];
    char gentilicio[30];
    char direccion[30];
    int mejor_tiempo;
};

void IngresarAtletas (vector<Atleta>&);
void MostrarAtletas (vector<Atleta>);
void MejorAtleta (vector<Atleta>);


int main()
{;
    vector<Atleta> Atletas; 
    IngresarAtletas (Atletas);
    MostrarAtletas (Atletas);
    MejorAtleta (Atletas);
    return 0;
}

void IngresarAtletas (vector<Atleta> &Atletas){
    int salir=0;
    do{
        Atleta atleta;
        cout<<"INGRESE EL NOMBRE DEL ATLETA"<<endl;
        cin.getline(atleta.nombre, 30);
        cout<<"INGRESE EL PAIS DEL ATLETA"<<endl;
        cin.getline(atleta.pais, 30);
        cout<<"INGRESE LA EDAD DEL ATLETA"<<endl;
        cin>>atleta.edad;
        cout<<"INGRESE EL MEJOR TIEMPO DEL ATLETA"<<endl;
        cin>>atleta.mejor_tiempo;
        Atletas.push_back(atleta);
        cout<<"DESEA INGRESAR MÁS ATLETAS??(1.SI, 2.NO)"<<endl;
        cin>>salir;
        cin.ignore();
    }while(salir!=2);
}

void MostrarAtletas (vector<Atleta> Atletas){
    for(Atleta i: Atletas){
        cout<<"NOMBRE: "<<i.nombre<<endl;
        cout<<"PAIS: "<<i.pais<<endl;
        cout<<"EDAD: "<<i.pais<<endl;
        cout<<"MEJOR TIEMPO: "<<i.mejor_tiempo<<endl;
    }
}

void MejorAtleta (vector<Atleta> Atletas){
    int menor=Atletas[0].mejor_tiempo, indice=0;
    for(int i=0;i<Atletas.size();i++){
        if(Atletas[i].mejor_tiempo<menor){
            menor=Atletas[i].mejor_tiempo;
            indice=i;
        }
    }
    cout<<"EL ATLETA CON MEJOR TIEMPO ES: "<<endl;
    cout<<"NOMBRE: "<<Atletas[indice].nombre<<endl;
    cout<<"PAIS: "<<Atletas[indice].pais<<endl;
    cout<<"EDAD: "<<Atletas[indice].pais<<endl;
    cout<<"MEJOR TIEMPO: "<<Atletas[indice].mejor_tiempo<<endl;
    
}