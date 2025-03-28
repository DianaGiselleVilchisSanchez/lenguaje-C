#include <iostream>
using namespace std;

int main() {
    int a = 0, b = 1, n;
    cout << "Cuantos numeros de Fibonacci? ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << a << " ";
        int temp = a + b;
        a = b;
        b = temp;
    }
}
