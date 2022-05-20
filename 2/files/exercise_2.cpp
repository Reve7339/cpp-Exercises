#include <iostream>
#include <vector>

int main() {
    using namespace std;
    vector<string> v(20);
    string last_name;
    
    for (int i = 0; i < 20; i++)
    {
        cout << "Enter the last name of the student number " << i+1 << ": ";
        getline(cin, last_name);
        v[i] = last_name;
    }
     
    for (string i : v)
    {
        cout << i << " ";
    }

    return 0;
}