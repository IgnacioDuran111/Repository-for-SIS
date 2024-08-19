/*
Materia: Programación I, Paralelo 1
Autor: Ignacio Joel Durán Choque
Fecha creación: 18/08/20
Número de ejercicio: 15
Problema planteado: Escribe un programa que muestre por consola los números de 1 a N
                    (ambos incluidos y con un salto de línea entre cada impresión), sustituyendo los siguientes:
- Múltiplos de 3 por la letra "x".
- Múltiplos de 5 por la letra "y".
- Múltiplos de 3 y de 5 a la vez por la letra "z".
*/
#include<iostream>
using namespace std;
int main(){
    system("cls");
    int number;
    cout<<"THIS PROGRAM SHOWS WHO NUMBER ARE MULTIPLIES OF 3 5 AND BOUT OF THEM"<<endl;
    cout<<"PLEASE ENTER A NUMBER"<<endl;
    cin>>number;
    for (int i=1;i<=number;i++){
        //pregunta si solo es divisible entre 3
        if(i%3==0 && i%5!=0){
            cout<<"x"<<endl;
        }
        //pregunta si solo es divisible entre 5
        else if(i%5==0 && i%3!=0){
            cout<<"y"<<endl;
        }
        //pregunta si es divisible entre 3 y 5
        else if(i%3==0 && i%5==0){
            cout<<"z"<<endl;
        }
        else{
            cout<<i<<endl;
        }
    }
    return 0;
}