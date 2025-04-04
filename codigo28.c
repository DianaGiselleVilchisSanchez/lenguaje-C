
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    string chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$";
    srand(time(0));
    for (int i = 0; i < 12; i++)
        cout << chars[rand() % chars.size()];
    cout << endl;
    return 0;
}
