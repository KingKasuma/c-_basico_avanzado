#include <iostream>
#include <cmath>
using namespace std;

int main(){
    /**5.- Calcular la distancia entre 2 puntos (P_1 y P_2)
        localizados en un plano XY
        raiz (x2-x1)^2+(y2-y1))^2**/
    int x1,y1,x2,y2;
    double distancia;

    cout<<"PUNTO 1"<<endl;
    cout<<"X :";
    cin>>x1;
    cout<<"Y :";
    cin>>y1;

    cout<<"PUNTO 2"<<endl;
    cout<<"X :";
    cin>>x2;
    cout<<"Y :";
    cin>>y2;

    distancia = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
    cout<<"La distancia es "<<distancia<<endl;

    return 0;
}
