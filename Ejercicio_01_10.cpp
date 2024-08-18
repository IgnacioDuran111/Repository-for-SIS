/*
Materia: Programación I, Paralelo 1
Autor: Ignacio Joel Durán Choque
Fecha creación: 18/08/20
Número de ejercicio: 10
Problema planteado: Crea un programa para calcular la cantidad de dígitos que tiene un número entero.
*/
#include<iostream>
using namespace std;
int main(){
    system("cls");
    int number,digits;
    cout<<"THIS PROGRAM CALCULATES THE NUMBER OF DIGITS IN AN INTEGER"<<endl;
    cout<<"PLEASE ENTER A NUMBER"<<endl;
    cin>>number;
    while(number>0){
        number/=10;
        digits++;
    }
        cout<<"THE NUMBER OF DIGITS IS "<<digits;
    return 0;
}