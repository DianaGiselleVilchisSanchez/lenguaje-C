
#include <iostream>
using namespace std;

int main() {
    int n, f = 1;
    cout << "Ingresa un número: ";
    cin >> n;
    for (int i = 1; i <= n; i++) f *= i;
    cout << "Factorial: " << f << endl;
    return 0;
}
