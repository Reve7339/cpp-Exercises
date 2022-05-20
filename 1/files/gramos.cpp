#include <iostream>
#include <cmath>

using namespace std;

int main(){
    string paciente;
    float kcal, car, lip, prot;
    cout << "Ingrese el nombre del paciente\n";
    cin >> paciente;
    cout << "Ingrese la dieta en Kcal: \n";
    cin >> kcal;
    car = kcal * (55.0/100);
    lip = kcal * (30.0/100);
    prot = kcal * (15.0/100);
    cout << "El paciente " << paciente << " debe consumir: \n";
    cout << "Carbohidratos: " << car << endl;
    cout << "Lípidos: " << lip << endl;
    cout << "Proteínas: " << prot << endl;
    cout << "Carbohidratos en gramos: " << car/4 << endl;
    cout << "Lípidos en gramos: " << lip/9 << endl;
    cout << "Proteínas en gramos: " << prot/4 << endl;
    return 0;
}
