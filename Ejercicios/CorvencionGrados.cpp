#include <iostream>
using namespace std;

int main(){
    /**Construye un programa que permita convertir una temperatura
        en grado Celsius a Fahrenheit (C = 5(F-32)/9)
        y Kelvin (C = K-273.15)**/
    float celsius, fahrenheit, kelvin;
    cout<<"Ingrese los grados celsius:";
    cin>>celsius;

    fahrenheit = celsius*9/5+32;
    kelvin = celsius + 273.15;
    cout<<"Los grados en kelvin es "<<kelvin<<endl;
    cout<<"Los grados en fahrenheit es "<<fahrenheit<<endl;

    return 0;
}
