/*
Materia: Programación I, Paralelo 1
Autor: Ignacio Joel Durán Choque
Fecha creación: 18/08/20
Número de ejercicio: 15
Problema planteado: Crea un programa se encargue de transformar un número decimal a binario
                    sin utilizar funciones propias del lenguaje que lo hagan directamente.
*/
#include<iostream>
using namespace std;
int main(){
    system("cls");
    int number,aux, unit, binary=0, cont=1;
    cout<<"THIS PROGRAM TRANSFORM A NUMBER FROM DECIMAL TO BINARY"<<endl;
    cout<<"PLEASE, ENTER A NUMBER"<<endl;
    cin>>number;
    aux=number;
    while (number>0){
        unit=number%2;
        binary+=unit*cont;
        cont*=10;
        number/=2;
    }
    cout<<"THE NUMBER "<<aux<<" IS IN BINARY: "<<binary<<endl;
    return 0;
}