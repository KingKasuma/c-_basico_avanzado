#include <iostream>
using namespace std;

int main(){
    /**Contruye un programa que ingrese un numero del 1 al 12
    y muestre el nombre de mes correspondiente**/
    int numero;
    cout<<"Ingrese el numero del mes:";
    cin>>numero;

    switch(numero){
        case 1: cout<<"Enero";
            break;
        case 2: cout<<"Febrero";
            break;
        case 3: cout<<"Marzo";
            break;
        case 4: cout<<"Abril";
            break;
        case 5: cout<<"Mayo";
            break;
        case 6: cout<<"Junio";
            break;
        case 7: cout<<"Julio";
            break;
        case 8: cout<<"Agosto";
            break;
        case 9: cout<<"Septiembre";
            break;
        case 10: cout<<"Octubre";
            break;
        case 11: cout<<"Noviembre";
            break;
        case 12: cout<<"Diciembre";
            break;
        default: cout<<"Numero de mes incorrecto"<<endl;
            break;
    }

    return 0;
}