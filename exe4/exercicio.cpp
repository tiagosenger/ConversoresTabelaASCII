#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    // a.
    double x, y, z;

    // b.
    cout << "Digite dois números de ponto flutuante (x e y): ";
    cin >> x >> y;

    // c.
    double curve = 5 * x + 2;
    if (y > curve) {
        cout << "O ponto (" << x << ", " << y << ") está acima da curva." << endl;
    } else if (y < curve) {
        cout << "O ponto (" << x << ", " << y << ") está abaixo da curva." << endl;
    } else {
        cout << "O ponto (" << x << ", " << y << ") está na curva." << endl;
    }

    // d.
    z = sqrt(pow(x, 2) + pow(y, 2));
    cout << "Distância euclidiana ao centro de coordenadas: " << z << endl;

    // e.
    z = x * y;
    cout << "Produto de x e y em notação científica: " << scientific << z << endl;

    return 0;
}
