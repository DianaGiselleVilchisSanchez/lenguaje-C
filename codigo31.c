
#include <iostream>
using namespace std;

int main() {
    string texto;
    int contador = 0;
    cout << "Ingresa una frase: ";
    getline(cin, texto);
    for (char c : texto)
        if (string("aeiouAEIOU").find(c) != string::npos)
            contador++;
    cout << "Número de vocales: " << contador << endl;
    return 0;
}
