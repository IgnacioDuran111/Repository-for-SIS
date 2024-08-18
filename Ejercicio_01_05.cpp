/*
Materia: Programación I, Paralelo 1
Autor: Ignacio Joel Durán Choque
Fecha creación: 17/08/20
Número de ejercicio: 5
Problema planteado: Crea un programa para verificar si un número ingresado es primo.
*/
#include<iostream>
using namespace std;
int main(){
    system("cls");
    //i es una variable para el bucle for, se la define como global por que se la usa fuera del bucle
    int number,i;
    cout<<"THIS PROGRAM DEFINE IF A NUMBER IS PRIME"<<endl;
    cout<<"PLEASE, ENTER NUMBER"<<endl;
    cin>>number;
    /*Se tiene en cuenta los siguientes aspectos
    1. Si el número ingresado n es divisible por un número primo k distinto de 1 y n, entonces:
        k < n/2 osea no existe un primo que divida a n que sea mayor a la n/2
    2. Se recorre a partir de n hasta 2, si algun numero es divisor de n entonces n NO ES PRIMO
    3. Si la variable i llega a 1, entonces n es primo*/
    for (i=number/2;i>1;i--){
        if(number%i==0){
            cout<<number<<" IS'NT A NUMBER PRIME";
            i=0;
        }
    }
    if(i==1){
        cout<<number<<" IS A NUMBER PRIME";
    }
    return 0;
}