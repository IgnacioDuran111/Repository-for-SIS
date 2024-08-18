/*
Materia: Programación I, Paralelo 1
Autor: Ignacio Joel Durán Choque
Fecha creación: 18/08/20
Número de ejercicio: 12
Problema planteado: Crea un programa para leer dos números y verificar si uno es múltiplo del otro o no lo es.
*/
#include<iostream>
using namespace std;
int main(){
    system("cls");
    int num1,num2;
    cout<<"THIS PROGRAM VERIFY IF A NUMBER IS A MULTIPLY OF OTHER"<<endl;
    cout<<"PLEASE INTRODUCE THE FIRST NUMBER"<<endl;
    cin>>num1;
    cout<<"PLEASE INTRODUCE THE SECOND NUMBER"<<endl;
    cin>>num2;
    //Verificamos que valor es mayor
    if(num1>num2){
        //Si uno divide a otro es multiplo
        if(num1%num2==0)
            cout<<num1<<" IS A MULTIPLY OF "<<num2;
        else
            cout<<num1<<" IS'NT A MULTIPLY OF "<<num2;
    }
    else{
        if(num2%num1==0)
        //Si uno divide a otro es multiplo
            cout<<num2<<" IS A MULTIPLY OF "<<num1;
        else
            cout<<num2<<" IS'NT A MULTIPLY OF "<<num1;
    }
    return 0;
}