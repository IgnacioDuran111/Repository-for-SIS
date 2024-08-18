/*
Materia: Programación I, Paralelo 1
Autor: Ignacio Joel Durán Choque
Fecha creación: 18/08/20
Número de ejercicio: 8
Problema planteado: Realice un programa que detecte si una letra ingresada el vocal o consonante.
                    Si no es ninguna letra que diga que es carácter especial.
*/
#include<iostream>
using namespace std;
int main(){
    system("cls");
    char letter;
    cout<<"THIS PROGRAM VERIFIES IF A LETTER IS LOWER OR UPPERCASE"<<endl;
    cout<<"PLEASE ENTER A WORD"<<endl;
    cin>>letter;
    // en en el código ascii A=65 y Z=90 se verifica si la letra esta en ese valor
    if (letter>='A' && letter<='Z'){
        cout<<"THE LETTER IS UPPERCASE"<<endl;
    } 
    // en en el código ascii a=97 y z=122 se verifica si la letra esta en ese valor
    else if (letter>='a' && letter<='z'){
        cout<<"THE LETTER IS lower"<<endl;
    }
    //sino está en ninguno de los valores se considera un carácter especial
    else{
        cout<<"THE LETTER IS SPECIAL CHARACTER"<<endl;
    }
    return 0; 
}