#include <iostream>
#include <vector>

using namespace std;

// Función para calcular las diferencias divididas
vector<vector<double>> calcularDiferenciasDivididas(const vector<double>& x, const vector<double>& y) {
    int n = x.size();
    vector<vector<double>> tabla(n, vector<double>(n));

    for (int i = 0; i < n; ++i) {
        tabla[i][0] = y[i];
    }

    for (int j = 1; j < n; ++j) {
        for (int i = 0; i < n - j; ++i) {
            tabla[i][j] = (tabla[i + 1][j - 1] - tabla[i][j - 1]) / (x[i + j] - x[i]);
        }
    }

    return tabla;
}

// Función para evaluar el polinomio interpolante de Newton en un punto dado
double evaluarInterpolacionNewton(const vector<double>& x, const vector<vector<double>>& tabla, double punto) {
    int n = x.size();
    double resultado = tabla[0][0];
    double producto = 1;

    for (int i = 1; i < n; ++i) {
        producto *= (punto - x[i - 1]);
        resultado += tabla[0][i] * producto;
    }

    return resultado;
}

int main() {
    // Datos de ejemplo
    vector<double> x = {0, 1, 2, 3, 4};
    vector<double> y = {1, 2, 3, 5, 8};

    // Calcular diferencias divididas
    vector<vector<double>> tabla = calcularDiferenciasDivididas(x, y);

    // Punto a interpolar
    double punto = 2.5;

    // Evaluar interpolación de Newton en el punto dado
    double interpolacion = evaluarInterpolacionNewton(x, tabla, punto);

    printf("El valor interpolado en %.2f es: %.6f\n", punto, interpolacion);

    return 0;
}