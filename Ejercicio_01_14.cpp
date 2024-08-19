/*
Materia: Programación I, Paralelo 1
Autor: Ignacio Joel Durán Choque
Fecha creación: 18/08/20
Número de ejercicio: 14
Problema planteado: Crea un programa para obtener el factorial de un número entero sin emplear el producto.
*/
#include<iostream>
using namespace std;
int main(){
    system("cls");
    int num1,keep_num,aux=0,aux2=0,result=0;
    cout<<"THIS PROGRAM CALCULATE THE FACTORIAL OF A NUMBER"<<endl;
    cout<<"PLEASE INTRODUCE A NUMBER"<<endl;
    cin>>num1;
    aux2=num1-1;
    keep_num=num1;
    result=num1;
    if (num1==0){
        //EL FACTORIAL DE 0 ES 1
        cout<<"THE FACTORIAL IS 1";
    }
    else {
        //REPETIREMOS N-1 VECES
        while(num1-aux>1){
            while(aux2>1){
                //MULTIPLICAMOS N*(N-1)
                result+=keep_num;
                aux2--;
            }
            //GUARDAMOS EL RESULTADO PARA HACER (N-1)(N-2) POSTERIORMENTE
            keep_num=result;
            //AUMENTAMOS AUX PARA REDUCIR EL NUMERO VECES A REPETIR
            aux++;
            //aux2 debe ser el numero de veces a repetir menos 1
            aux2=num1-1-aux;
        }
        cout<<"THE FACTORIAL IS "<<result;
    }
    return 0;
}