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
    int num1,keep_num,aux=0,result=0;
    cout<<"THIS PROGRAM CALCULATE THE FACTORIAL OF A NUMBER"<<endl;
    cout<<"PLEASE INTRODUCE A NUMBER"<<endl;
    cin>>num1;
    keep_num=num1;
    for (int j=1;j<num1-1;j++){
        for (int i=1;i<num1;i++){
            result+=keep_num;
        }
        keep_num=result;
        aux++;
        result=0;
    }
    cout<<"THE FACTORIAL IS "<<keep_num;
    return 0;
}