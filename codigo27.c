
#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

int main() {
    for (int i = 0; i <= 10; i++) {
        cout << "\rContador: " << i << " segundos";
        this_thread::sleep_for(chrono::seconds(1));
    }
    cout << "\n¡Tiempo terminado!\n";
    return 0;
}
