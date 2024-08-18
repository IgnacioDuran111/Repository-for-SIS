/*
Materia: Programación I, Paralelo 1
Autor: Ignacio Joel Durán Choque
Fecha creación: 17/08/20
Número de ejercicio: 4
Problema planteado: Crea un programa para realizar la conversión de 
                    temperatura de grados centígrado a Kelvin.
*/
#include<iostream>
using namespace std;
int main(){
    system("cls");
    float centigrade, kelvin;
    cout<<"THIS PROGRAM CONVERT HEAT FROM CENTIGRADE TO KELVIN"<<endl;
    cout<<"ENTER HEAT IN CENTIGRADE"<<endl;
    cin>>centigrade;
    //0 GRADOS CENTIGRADOS ES IGUAL A 273.15 GRADOS KELVIN
    kelvin=centigrade+273.15;
    cout<<"HEAT IN KELVIN IS: "<<kelvin<<endl;
    return 0;
}