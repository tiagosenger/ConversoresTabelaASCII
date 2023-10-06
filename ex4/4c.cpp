#include <iostream>

using namespace std;

int main() {
    double x, y;

    cout << "Informe o valor de x: ";
    cin >> x;

    cout << "Informe o valor de y: ";
    cin >> y;

    double fx = 5 * x + 2;

    if (y < fx) {
        cout << "O ponto (" << x << ", " << y << ") está acima da curva f(x)." << endl;
    } else if (y > fx) {
        cout << "O ponto (" << x << ", " << y << ") está abaixo da curva f(x)." << endl;
    } else {
        cout << "O ponto (" << x << ", " << y << ") está sobre a curva f(x)." << endl;
    }

    return 0;
}
