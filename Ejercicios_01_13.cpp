/*
Materia: Programación I, Paralelo 1
Autor: Ignacio Joel Durán Choque
Fecha creación: 18/08/20
Número de ejercicio: 13
Problema planteado: Crea un programa para leer un número entero y mostrarlo con las cifras al revés.
*/
#include<iostream>
using namespace std;
int main(){
    system("cls");
    int number, rest, invert=0;
    cout<<"THIS PROGRAM INVERT A NUMBER"<<endl;
    cin>>number;
    while(number>0){
        rest=number%10;
        invert=invert*10+rest;
        number/=10;
    }
    cout<<"THE INVERT NUMBER IS "<<invert<<endl;
    return 0;
}