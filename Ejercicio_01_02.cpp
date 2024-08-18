/*
Materia: Programación I, Paralelo 1
Autor: Ignacio Joel Durán Choque
Fecha creación: 17/08/20
Número de ejercicio: 2
Problema planteado: Crea un programa para calcular el volumen de una esfera,
                    el usuario debe ingresar radio de la esfera.
*/
#include<iostream>
using namespace std;
int main(){
    system("cls");
    float radio, volume;
    cout<<"THIS PROGRAM CALCULATE THE SPHERE'S VOLUME"<<endl;
    cout<<"PLEASE, ENTER RADIO"<<endl;
    cin>>radio;
    //TOMAMOS A PI COMO PI=3.141592
    volume=(4*3.141592/3)*(radio*radio*radio);
    cout<<"THE SPHERE'S VOLUME IS: "<<volume<<"m^3";
    return 0;
}