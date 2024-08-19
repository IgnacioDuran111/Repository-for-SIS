/*
Materia: Programación I, Paralelo 1
Autor: Ignacio Joel Durán Choque
Fecha creación: 18/08/20
Número de ejercicio: 15
Problema planteado: Crea un programa para generar:
                    121
                    12321
                    1234321
                    123454321
                    12345654321
                    1234567654321
                    123456787654321
                    12345678987654321
*/
#include<iostream>
using namespace std;
int main(){
    system("cls");
    int number=1;
    //El 1er for define el tamaño de la pirámide
    for (int i=2;i<=9;i++){
        //Imprime los numeros de 0 hasta el valor de i del primer bucle 
        for(int k=1;k<i;k++){
            cout<<k;
        }
        //Imprime los numeros desdde el valor i hasta 1 
        for(int k=i;k>0;k--){
            cout<<k;
        }
        //salto de linea para continuar
        cout<<"\n";
    }
    return 0;
}