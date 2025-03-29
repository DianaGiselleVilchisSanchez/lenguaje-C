// codigo15
#include <iostream>
#include <windows.h>
#include <ctime>

int main() {
    srand(time(0));
    while (true) {
        for (int i = 0; i < 80; i++) {
            char c = 33 + rand() % 94;
            std::cout << c;
        }
        Sleep(50);
        system("color 0A");
        std::cout << std::endl;
    }
    return 0;
}
