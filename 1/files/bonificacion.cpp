#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float ventas;
    cout << "Ingrese el total de ventas: ";
    cin >> ventas;
    if (ventas > 25'000'000) ventas += ventas/10;
    cout << "El valor total es: " << ventas;
    return 0;
}

