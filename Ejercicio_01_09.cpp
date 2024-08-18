/*
Materia: Programación I, Paralelo 1
Autor: Ignacio Joel Durán Choque
Fecha creación: 18/08/20
Número de ejercicio: 9
Problema planteado: Crea un programa para mostrar los primero 100 número primos.
*/
#include<iostream>
using namespace std;
int main(){
    system("cls");
    //number empieza en 2 por que 2 es el 1er número primo
    int i=0, number=2, j;
    //No sabemos hasta que número encontraremos el Centésimo número primo
    //Pero sabemos que debe encontrar 100
    while(i<100){
        //Se compara todos los números entre number y j y si alguno es divisor de number
        //Entonces number NO es primo
        for (j=2;j<number;j++){
            if(number%j==0){
                j=number+1;
            }
        }   
        //Si sale del Bucle sin encontrar divisores entonces j será igual a number
        //Si encuentra algún divisor j será number+1 
        if(j==number){
            //number es primo, se lo muestra en pantalla y se cuenta que se encotró un primo más
            cout<<number<<endl;
            i++;
        }
        //Se aumenta el valor de number
        //Se rompe el bucle Si solo si se hayan impreso 100 numeros primos, no importa hasta que valor cresca number
        number++;
    }
    return 0;
}