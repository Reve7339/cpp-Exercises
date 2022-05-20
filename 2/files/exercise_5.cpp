#include <iostream>
#include <vector>
#include <chrono>
#include <algorithm>

int seed() {
    auto point_time = std::chrono::system_clock::now();
    auto since_epoch = point_time.time_since_epoch();
    auto duracion = std::chrono::duration_cast<std::chrono::nanoseconds>(since_epoch);
    auto millisec = duracion.count();
    return millisec;
}

int random_number(std::vector<int> primos) {
    int aleatorio;
    srand(seed());
    aleatorio= rand()%primos.size();
    return primos[aleatorio];
}

int main() {
    using namespace std;
    vector<int> primos;
    bool es_primo = 1;
    int filas = 0, columnas = 0;

    cout << "Ingrese el número de filas: ";
    cin >> filas;
    cout << "Ingrese el número de columnas: ";
    cin >> columnas;
    vector<vector <int>> v(filas, vector<int>(columnas));

    for (int i = 2; i < 50; i++)
    {
        es_primo = 1;
        for (int j = 2; j < i; j++)
        {
            if (i%j == 0) es_primo = 0;
        }
        if (es_primo == 1) primos.push_back(i);
    }

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            v[i][j] = random_number(primos);
        }
        
    }
    
    for (int i = 0; i < filas; i++)
        {
            for (int j = 0; j < columnas; j++)
            {
                cout << v[i][j] << " ";
            }
            cout << "\n";
        }

    return 0;
}