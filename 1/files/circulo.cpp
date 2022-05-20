#include <iostream>
#include <math.h>

using namespace std;

int main() {
    float radio;
    const float PI = 3.1416;
    cout << "Ingrese el radio del círculo: ";
    cin >> radio;
    cout << "El área es: " << PI * pow(radio, 2);
    return 0;
}