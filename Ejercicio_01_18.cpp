/*
Materia: Programación I, Paralelo 1
Autor: Ignacio Joel Durán Choque
Fecha creación: 18/08/20
Número de ejercicio: 15
Problema planteado: Escribe una función que calcule si un número dado es un número de Armstrong
                    (o también llamado narcisista). 
                    Si no conoces qué es un número de Armstrong, debes buscar información al respecto.
*/
#include<iostream>
using namespace std;
int main(){
    system("cls");
    int number, digits, aux, keep_number, result,power=1;
    cout<<"THIS PROGRAM CHECKS IF A NUMBER IS NARCISSISTIC"<<endl;
    cout<<"PLEASE ENTER A NUMBER"<<endl;
    cin>>number;
    aux=number;//variable auxiliar 
    keep_number=number; //guarda el número para comparar al final
    //Utilizar la variable auxiliar para saber los n digitos del número
    while(aux>0){
        aux/=10;
        digits++;
    }

    while(number>0){
        //Recorrer los dígitos del número y elevarlos a la potencia del mismo
        for(int i=1;i<=digits;i++){
            power*=number%10;
        }
        //sumar las potencias
        result+=power;
        power=1;
        //recorrer el siguiente número
        number/=10;
    }

    if (result==keep_number)
        cout<<keep_number<<" IS A NARCISSISTIC NUMBER";
    
    else
        cout<<keep_number<<" IS'NT A NARCISSISTIC NUMBER "<<result;

    return 0;
}