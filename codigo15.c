#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int secreto = rand() % 100 + 1;
    int intento;
    cout << "Adivina el numero (1-100): ";
    do {
        cin >> intento;
        if (intento > secreto) cout << "Muy alto!\n";
        else if (intento < secreto) cout << "Muy bajo!\n";
    } while (intento != secreto);
    cout << "Correcto! Era " << secreto << endl;
    return 0;
}
