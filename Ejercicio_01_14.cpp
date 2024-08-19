/*
Materia: Programación I, Paralelo 1
Autor: Ignacio Joel Durán Choque
Fecha creación: 18/08/20
Número de ejercicio: 14
Problema planteado: Crea un programa para obtener el factorial de un número entero sin emplear el producto.
*/
#include<iostream>
using namespace std;
int main(){
    system("cls");
    int num1,aux,aux2,result=0;
    cout<<"THIS PROGRAM CALCULATE THE FACTORIAL OF A NUMBER"<<endl;
    cout<<"PLEASE INTRODUCE A NUMBER"<<endl;
    cin>>num1;
    aux=num1-1;
    while(aux>0){
        aux2=num1-2;
        while(aux2>0){
            result+=num1;
            aux2--;
        }
        aux--;
    }
    cout<<"THE FACTORIAL IS "<<result;
    return 0;
}