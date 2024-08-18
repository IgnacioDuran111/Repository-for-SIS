/*
Materia: Programación I, Paralelo 1
Autor: Ignacio Joel Durán Choque
Fecha creación: 18/08/20
Número de ejercicio: 7
Problema planteado: Realice un programa que ingrese los meses de 1 al 12 y el programa despliegue el mes en literal.
                    Si se ingresa un valor distinto a 1 al 12 el programa debe dar un mensaje de mes inválido.
*/
#include<iostream>
using namespace std;
int main(){
    system("cls");
    int month;
    cout<<"THIS PROGRAM SHOWS THE MONTHS OF THE YEAR"<<endl;
    cout<<"PLEASE ENTER A NUMBER"<<endl;
    cin>>month;
    switch (month){
    case 1:
        cout<<"JANUARY"<<endl;
        break;
    case 2:
        cout<<"FEBRUARY"<<endl;
        break;
    case 3:
        cout<<"MARCH"<<endl;
        break;
    case 4:
        cout<<"APRIL"<<endl;
        break;
    case 5:
        cout<<"MAY"<<endl;
        break;
    case 6:
        cout<<"JUNE"<<endl;
        break;
    case 7:
        cout<<"JULY"<<endl;
        break;
    case 8:
        cout<<"AUGUST"<<endl;
        break;
    case 9:
        cout<<"SEPTEMBER"<<endl;
        break;
    case 10:
        cout<<"OCTOBER"<<endl;
        break;
    case 11:
        cout<<"NOVEMBER"<<endl;
        break;
    case 12:
        cout<<"DECEMBER"<<endl;
        break;
    
    default:
        cout<<"INVALID MONTH"<<endl;
        break;
    }
    return 0;
}