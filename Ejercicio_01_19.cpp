/*
Materia: Programación I, Paralelo 1
Autor: Ignacio Joel Durán Choque
Fecha creación: 18/08/20
Número de ejercicio: 15
Problema planteado: Crea un programa que reciba días, horas, minutos y segundos
                    (como enteros) y retorne su resultado en segundos.
*/
#include<iostream>
using namespace std;
int main(){
    system("cls");
    int days, hours, minutes, seconds; 
    cout<<"THIS PROGRAM TRANSFORM FROM DAYS, HOURS, MINUTES ON SECONDS"<<endl;
    cout<<"ENTER DAYS"<<endl;
    cin>>days;
    cout<<"ENTER HOURS"<<endl;
    cin>>hours;
    cout<<"ENTER MINUTES"<<endl;
    cin>>minutes;
    cout<<"ENTER SECONDS"<<endl;
    cin>>seconds;
    seconds+=days*(24*3600)+hours*3600+minutes*60;
    cout<<"THE TOTAL IS: "<<seconds<<endl;
    return 0;
}