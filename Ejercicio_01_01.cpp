/*
Materia: Programación I, Paralelo 1
Autor: Ignacio Joel Durán Choque
Fecha creación: 17/08/20
Número de ejercicio: 1
Problema planteado: Crea un programa para calcular el área de un triángulo. 
                    El usuario debe ingresar la base y altura.
*/

#include<iostream>
using namespace std;
int main(){
    float base, height, Area;
    cout<<"THIS PROGRAM CALCULATE THE TRIANGLE'S AREA"<<endl;
    cout<<"PLEASE, ENTER BASE"<<endl;
    cin>>base;
    cout<<"PLEASE, ENTER HEIGHT"<<endl;
    cin>>height;
    //Calcular el area del triángulo
    Area=(base*height)/2;
    cout<<"THE TRIANGLE'S AREA IS: "<<Area;
    return 0;
}