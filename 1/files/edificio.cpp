#include <iostream>
#include <math.h>

using namespace std;

int main() {
    const float PI = 3.1416;
    float hipotenusa, angulo, distancia, rad_andulo;
    cout << "Ingrese la hipotenusa: ";
    cin >> hipotenusa;
    cout << "\nIngrese el ángulo: ";
    cin >> angulo;
    rad_andulo = angulo * PI / 180;
    distancia = sin(rad_andulo) * hipotenusa;
    cout << "\nLa distancia es: " << distancia;
    return 0;
}