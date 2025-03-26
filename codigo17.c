#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string palabra;
    cout << "Escribe una palabra: ";
    cin >> palabra;
    string inversa = palabra;
    reverse(inversa.begin(), inversa.end());
    if (palabra == inversa) cout << "Es un palindromo!\n";
    else cout << "No es un palindromo.\n";
}
