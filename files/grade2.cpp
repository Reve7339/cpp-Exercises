#include <iostream>
#include <cmath>

using namespace std;

int main(){
    string status = "Reprobado";
    float nota1, nota2, nota3, nota_final;
    cout << "Ingrese las notas del alumno: \n";
    cin >> nota1 >> nota2 >> nota3;
    nota_final = (nota1*25.0/100.0) + (nota2*30.0/100.0) + (nota3*45.0/100.0);
    if (nota_final >= 3.0) status = "Aprobado";
    cout << "El alumno ha " << status << " con " << nota_final;
    return 0;
}

