#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;

    cout << "Digite o coeficiente a: ";
    cin >> a;
    cout << "Digite o coeficiente b: ";
    cin >> b;
    cout << "Digite o coeficiente c: ";
    cin >> c;

    double discriminante = b * b - 4 * a * c;

    if (discriminante > 0) {
        double raiz1 = (-b + sqrt(discriminante)) / (2 * a);
        double raiz2 = (-b - sqrt(discriminante)) / (2 * a);
        cout << "O polinômio tem duas raízes reais distintas:" << endl;
        cout << "Raiz 1: " << raiz1 << endl;
        cout << "Raiz 2: " << raiz2 << endl;
    } else if (discriminante == 0) {
        double raiz = -b / (2 * a);
        cout << "O polinômio tem uma raiz real (raiz dupla):" << endl;
        cout << "Raiz: " << raiz << endl;
    } else {
        cout << "O polinômio não tem raízes reais." << endl;
    }

    return 0;
}
