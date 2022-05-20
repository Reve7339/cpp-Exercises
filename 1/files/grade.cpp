#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float grade1, grade2, grade3;
    string nombre;
    cout << "Ingrese el nombre del estudiante\n";
    cin >> nombre;
    cout << "Ingrese las notas del estudiante\n";
    cin >> grade1 >> grade2 >> grade3;
    cout << "La nota final del estudiante " << nombre << " es: " << grade1*0.25+grade2*0.30+grade3*0.45;
    return 0;
}