#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float radio, masa, longitud;
    const float PI = 3.1416, den = 2.7;
    cout << "Ingrese el radio: ";
    cin >> radio;
    cout << "Ingrese la masa: ";
    cin >> masa;
    longitud = masa / (den * PI * pow(radio, 2));
    cout << "La longitud es: " << longitud;
    return 0;
}

