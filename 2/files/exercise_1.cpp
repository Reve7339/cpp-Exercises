#include <iostream>
#include <vector>
#include <chrono>

int seed() {
    auto point_time = std::chrono::system_clock::now();
    auto since_epoch = point_time.time_since_epoch();
    auto duracion = std::chrono::duration_cast<std::chrono::nanoseconds>(since_epoch);
    auto millisec = duracion.count();
    return millisec;
}

int random_number() {
    int aleatorio;
    srand(seed());
    aleatorio= rand()%101;
    return aleatorio;
}

int main() {
    using namespace std;
    vector<int> v;
    
    for (int i = 0; i < 10; i++)
    {
        v.push_back(random_number());
    }
     
    for (int i: v)
    cout << i << ' ';

    return 0;
}