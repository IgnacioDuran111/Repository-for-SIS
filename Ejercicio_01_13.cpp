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
        //CALCULAMOS EL RESIDUO DEL NUMERO
        rest=number%10;
        //lO PONEMOS AL NUMERO A INVERTIR
        invert=invert*10+rest;
        //DIVIDIMOS AL NUMERO ENTRE 10 Y REPETIMOS
        number/=10;
    }
    cout<<"THE INVERT NUMBER IS "<<invert<<endl;
    return 0;
}