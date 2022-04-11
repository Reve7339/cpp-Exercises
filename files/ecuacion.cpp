#include <iostream>
#include <math.h>

using namespace std;

int main() {
    float a, b, c, discriminante, raiz1, raiz2;
    cout << "Ingrese el rcoeficiente a: ";
    cin >> a;
    cout << "Ingrese el rcoeficiente b: ";
    cin >> b;
    cout << "Ingrese el rcoeficiente c: ";
    cin >> c;
    discriminante = pow(b, 2) - 4 * a * c;
    if (discriminante < 0) {
        cout << "Las raíces son complejas";
        return 0;
    } else {
        raiz1 = (-b - sqrt(discriminante)) / (2 * a);
        raiz2 = (-b + sqrt(discriminante)) / (2 * a);
    }
    cout << "La primera raíz es: " << raiz1;
    cout << "\nLa segunda raíz es: " << raiz2;
    return 0;
}