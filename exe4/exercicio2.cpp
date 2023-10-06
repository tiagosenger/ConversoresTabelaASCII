#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // a.
    double a, b, c;

    cout << "Digite os coeficientes a, b e c do polinômio (ax^2 + bx + c): ";
    cin >> a >> b >> c;

    // i.
    double delta = b * b - 4 * a * c;

    if (delta > 0) {
        cout << "O polinômio tem duas raízes reais." << endl;
        double root1 = (-b + sqrt(delta)) / (2 * a);
        double root2 = (-b - sqrt(delta)) / (2 * a);
        cout << "Raízes: " << root1 << " e " << root2 << endl;
    } else if (delta == 0) {
        cout << "O polinômio tem uma raiz real." << endl;
        double root = -b / (2 * a);
        cout << "Raiz: " << root << endl;
    } else {
        cout << "O polinômio não tem raízes reais." << endl;
    }

    // b.
    double x;
    cout << "Digite um valor para x: ";
    cin >> x;

    double px = a * pow(x, 2) + b * x + c;
    cout << "p(x) = " << px << endl;

    return 0;
}
