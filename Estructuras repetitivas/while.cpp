#include <iostream>

using namespace std;

int main(){
    /**Estructuras repetitivas
    1.- While -> Mientras
    2.- Do While -> Hacer Mientras
    **/
    int numero = 5;
    /** PRE-CONDICION **/
    while(numero==6){
        cout<<"Ciclo while"<<endl;
    }

    /** POST CONDICIONAL **/
    do{
        cout<<"Ciclo de-while"<<endl;
    }while(numero==6);
    return 0;
}
