#include <iostream>
#include <cmath>

using namespace std;

int main(){
    string status;
    float nota1, nota2, nota3, nota_final;
    cout << "Ingrese las notas del alumno: \n";
    cin >> nota1 >> nota2 >> nota3;
    nota_final = (nota1*25.0/100.0) + (nota2*30.0/100.0) + (nota3*45.0/100.0);
    if (nota_final < 3.0) {
        status = "Insuficiente";
    } else if (nota_final < 4) {
        status = "Aceptable";
    } else if (nota_final <=4.5) {
        status = "Bueno";
    } else {
        status = "Excelente";
    }
    cout << "El estatus del alumno es: " << status;
    return 0;
}

