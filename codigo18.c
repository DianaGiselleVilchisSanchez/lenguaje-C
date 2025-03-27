#include <iostream>
using namespace std;

void sierpinski(int n) {
    for (int y = 0; y < n; ++y) {
        for (int x = 0; x <= y; ++x) {
            cout << (((x & y) == 0) ? '*' : ' ');
        }
        cout << '\n';
    }
}

int main() {
    sierpinski(32);
    return 0;
}
