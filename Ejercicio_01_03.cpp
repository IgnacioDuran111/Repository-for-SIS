/*
Materia: Programación I, Paralelo 1
Autor: Ignacio Joel Durán Choque
Fecha creación: 17/08/20
Número de ejercicio: 3
Problema planteado: Crea un programa para calcular el promedio de notas,
                    escriba un programa que lea N notas y saque le promedio general.
*/
#include<iostream>
using namespace std;
int main(){
    system("cls");
    float grade, average=0; 
    int  n, cont=0; //n es una variable condicional si el bucle se repite o no
    cout<<"THIS PROGRAM CALCULATE THE AVERAGE OF THE STUDENTS' GRADE"<<endl;
    do{
        cout<<"ENTER STUDENT GRADE: ";
        cin>>grade;
        //CALCULAMOS LA SUMATORIA DE LAS NOTAS
        average+=grade;
        cout<<"DO YOU WANT TO CONTINUE?... (YES: 1, NO: 0) ";
        //PREGUNTAMOS AL USUARIO SI DESEA CONTINUAR
        cin>>n;
        cont++;
    }while (n==1);
    //DIVIDE LA SUMATORIA DE LAS NOTAS ENTRE EN EL NÚMERO DE NOTAS INGRESADAS
    average/=cont;
    cout<<"THE AVERAGE OF THE STUDENTS' GRADE IS: "<<average<<endl;
    return 0;
}