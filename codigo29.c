
#include <iostream>
using namespace std;

int main() {
    int altura;
    cout << "Altura de la pirámide: ";
    cin >> altura;
    for (int i = 1; i <= altura; i++) {
        for (int j = 0; j < altura - i; j++) cout << " ";
        for (int j = 0; j < 2*i - 1; j++) cout << "*";
        cout << endl;
    }
    return 0;
}
