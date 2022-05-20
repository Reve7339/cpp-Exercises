#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float temp_in, temp_fin, agua_masa, calor;
    cout << "Ingrese la masa del agua: ";
    cin >> agua_masa;
    cout << "Ingrese la temperatura inicial: ";
    cin >> temp_in;
    cout << "Ingrese la temperatura final: ";
    cin >> temp_fin;
    cout << "El calor requerido es: " << (temp_fin-temp_in) * agua_masa;
    return 0;
}

