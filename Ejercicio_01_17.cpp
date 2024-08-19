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
        //sacamos el modulo con 2, 1 o 0
        binary+=unit*cont; //se suma usando potencias (1,10,100...)
        cont*=10;//aumentamos la potencia para recorrer de dígito
        number/=2;//se divide entre 2 el número
    }
    cout<<"THE NUMBER "<<aux<<" IS IN BINARY: "<<binary<<endl;
    return 0;
}