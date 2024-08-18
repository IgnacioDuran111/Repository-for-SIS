/*
Materia: Programación I, Paralelo 1
Autor: Ignacio Joel Durán Choque
Fecha creación: 18/08/20
Número de ejercicio: 6
Problema planteado: Crea un programa para verificar si un número ingresado es amigo.
*/
#include<iostream>
using namespace std;
int main(){
    system("cls");
    int number, amicable=0, check=0;
    cout<<"THIS PROGRAM CHECK IF A NUMBER IS AN AMICABLE NUMBER"<<endl;
    cout<<"PLEASE ENTER A NUMBER"<<endl;
    cin>>number;

    for (int i=1;i<number;i++){
        if (number%i==0)
            amicable+=i;
    }
    for (int i=1;i<amicable;i++){
        if (amicable%i==0)
            check+=i;
    }
    if(check==number)
        cout<<number<<" IS AN AMICABLE NUMBER, HIS PAIR IS "<<amicable<<endl;
    else
        cout<<number<<" IS'NT AN AMICABLE NUMBER"<<endl;

    return 0;
}