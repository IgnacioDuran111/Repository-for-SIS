/*
Materia: Programación I, Paralelo 1
Autor: Ignacio Joel Durán Choque
Fecha creación: 18/08/20
Número de ejercicio: 11
Problema planteado: Crea un programa para calcular para multiplicar dos números enteros,
                    sin emplear el operador de la multiplicación, empleando sumas sucesivas.
*/
#include<iostream>
using namespace std;
int main(){
    system("cls");
    int num1,num2, result, signo=1;
    cout<<"THIS PROGRAM CALCULATE THE MULTIPLICATION OF TWO NUMBERS"<<endl;
    cout<<"PLEASE INTRODUCE THE FIRST NUMBER"<<endl;
    cin>>num1;
    cout<<"PLEASE INTRODUCE THE SECOND NUMBER"<<endl;
    cin>>num2;
    //TOMAR LOS SIGNOS PARA INSERTARLOS DESPUES
    if (num1<0){
        num1*=-1;
        signo=-1;
    }
    if (num2<0){
        num2*=-1;
        signo=-1;
    }
    //CALCULAR LA MULTIPLICACIÓN CON LAS SUMAS SUCESIVAS
    while(num2>0){
        result+=num1;
        num2--;
    }
    cout<<"THE MULTIPLICATION IS "<<result*signo;
    return 0;
}