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

int random_number() {
    int aleatorio;
    srand(seed());
    aleatorio= rand();
    return aleatorio;
}

int main() {
    using namespace std;
    vector<int> v;
    
    for (int i = 0; i < 20; i++)
    {
        v.push_back(random_number());
    }
     
    sort(v.rbegin(), v.rend());

    for (int i: v){
        cout << i << " ";
    }

    return 0;
}