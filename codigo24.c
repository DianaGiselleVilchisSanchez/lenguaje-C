#include <iostream>
using namespace std;

int main() {
    float temp;
    char tipo;
    cout << "Temperatura (C/F): ";
    cin >> temp >> tipo;
    if (tipo == 'C' || tipo == 'c')
        cout << "Fahrenheit: " << temp * 9/5 + 32 << endl;
    else
        cout << "Celsius: " << (temp - 32) * 5/9 << endl;
    return 0;
}
