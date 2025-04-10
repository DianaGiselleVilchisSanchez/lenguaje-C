
#include <iostream>
#include <unistd.h>
using namespace std;

int main() {
    string heart[] = {
        "  **     **  ",
        "****   **** ",
        "****** *****",
        " ********** ",
        "  ********  ",
        "   ******   ",
        "    ****    ",
        "     **     "
    };
    for (int k = 0; k < 5; k++) {
        system("clear"); // usa "cls" si estás en Windows
        for (auto line : heart)
            cout << line << endl;
        usleep(500000);
    }
    return 0;
}
