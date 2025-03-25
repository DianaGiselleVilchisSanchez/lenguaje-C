#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 10;
    vector<vector<char>> mat(n, vector<char>(n, ' '));
    int val = 1, i = 0, j = 0, dir = 0, steps = n;

    while (steps > 0) {
        for (int k = 0; k < steps; k++) {
            mat[i][j] = '*';
            if (dir == 0) j++;
            else if (dir == 1) i++;
            else if (dir == 2) j--;
            else i--;
        }
        if (dir == 1 || dir == 3) steps--;
        dir = (dir + 1) % 4;
    }

    for (auto& row : mat) {
        for (char c : row) cout << c << ' ';
        cout << '\n';
    }
}
