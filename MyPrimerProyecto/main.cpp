#include <iostream>
#include <cmath>
//#define PI 3.14159

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

    /**OPERADORES MATEMATICOS**/
    /** Suma -> +
        Resta -> -
        Multiplicacion -> *
        Division -> /
        MODULO -> %
    **/
    int num1 = 7;
    int num2 = 3;
    int cociente = num1/num2;
    int mod = num1%num2;
    cout<<cociente<<endl;
    cout<<mod<<endl;

    /**PRECEDENCIA ARITMETICA**/
    /**1.- Las operaciones entre parentesis **/
    /**2.- Multiplicacion, division y modulo **/
    /**3.- Suma y resta **/
    /** -> **/
    cout<<14-8/2*3+1<<endl;/**3**/
    cout<<(14-8)/2*3+1<<endl;/**10**/
    cout<<14-(8/2*3)+1<<endl;/**3**/
    cout<<14-8/2*(3+1)<<endl;/**-2**/
    cout<<(14-8)/2*(3+1)<<endl;/**12**/

    /**OPERADORES LOGICOS**/
    /**         Y   ->      &&      **/
    /**         O   ->      ||      **/
    /**         NO  ->      !      **/

    /**Igualdad ->  ==  **/
    /**Diferente ->  !=  **/
    /** Menor ->  <  **/
    /** Mayor ->  >  **/
    /**Menor igual ->  <=  **/
    /**Mayor igual ->  >=  **/

    bool r1 = (true&&true)||false; /**TRUE**/
    bool r2 = (5==5) || (6!=2) && !(1==1);/**TRUE**/
    bool r3 = false && true || false; /**FALSE**/
    bool r4 = (5<3) || (3>=3) || true;/**TRUE**/
    bool r5 = ((3<=3)&& (5<5) || false);/**FALSE**/

    cout<<r1<<endl;
    cout<<r2<<endl;
    cout<<r3<<endl;
    cout<<r4<<endl;
    cout<<r5<<endl;

    /**MATH**/
    double potencia = pow(5,5);/**potencia**/
    double raiz = sqrt(100.0);/**Raiz cuadrada**/
    double seno = sin(0.523599);//30
    double coseno = cos(1.0472);//60
    double tangente = tan(0.785398);//45
    cout<<"Potencia :"<<potencia<<endl;
    cout<<"Raiz :"<<raiz<<endl;
    cout<<"Seno :"<<seno<<endl;
    cout<<"Coseno :"<<coseno<<endl;
    cout<<"Tangente :"<<tangente<<endl;

    /**Constantes
    definir la constante al principio con la palabra reservada define
    o tambien con la palabra const dentro del codigo
    **/
    const double PI = 3.14159;
    const double example = 5.898989;
    cout<<PI<<endl;



    return 0;
}
