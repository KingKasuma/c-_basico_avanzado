#include <iostream>

using namespace std;

int main()
{
    /*SECUENCIAS DE ESCAPE
    \n -> salto de linea
    \b -> retroceso
    \r -> retroceso de carro
    \t -> tabulador
    */

    /*DECLARACION DE VARIABLES*/
    int edad = 25, varx=30;
    char varChar = 'A';
    float promedioFinal = 3.14, promF = 15.9;
    double varDoble = 158.12;
    bool varBool = false;
    /*DECLARACION DE VARIABLES*/

    /**NOTACION CIENTIFICA **/
    int valor1 = 3e3; /**3*10^3**/
    double valor2 = 5.3e3; /**5.3*10^3**/
    double valor3 = 1.222e-3;/**1.222*10^-3**/
    cout<< valor1<<endl;
    cout<< valor2<<endl;
    cout<< valor3<<endl;
    /**NOTACION CIENTIFICA **/

    /**TIPO INT**/
    /** PESO EN BYTES = 4(varia)
        No de valores = 2^32 = 4,294,967,296
        Rango = de -2,147,483,648 a 2,147,483,647
        32 bits
        1 bit -> signo
        31 bits -> valores que puede tomar -> 2^31 -> 2,147,483,648

        32 bits -> 2^32 = 4,294,967,296
        unsigned -> sin signo
        unsigned int -> 32 bits para los valores
        2^32 = 4,294,967,296
        RANGO -> 0 hasta 4,294,967,295
    **/

    int numero = -1;
    unsigned int numero2 = -1;
    cout << numero << endl;
    cout << numero2 << endl;

    /**Bool         FLOAT               DOUBLE
PESO:  1 byte       4bytes              8bytes
RANGO: -        1.17e-38 a 3.40e38      2.22e-308 a 1.80e308
    **/

    cout<<"Bool: "<<sizeof(bool)<<" Byte"<<endl;
    cout<<"Float: "<<sizeof(float)<<" Bytes"<<endl;
    cout<<"Double: "<<sizeof(double)<<" Bytes"<<endl;

    int numero7;
    cout<<"Ingrese un numero: ";
    cin>>numero;
    cout<<"El valor ingresado es "<<numero<<endl;


    return 0;
}
