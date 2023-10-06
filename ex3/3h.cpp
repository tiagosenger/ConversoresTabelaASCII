#include <iostream>

using namespace std;

int main() {
    int a, b;

    cout << "Digite o valor de a: ";
    cin >> a;

    cout << "Digite o valor de b: ";
    cin >> b;

    if (b != 0) {
        if (a % b == 0) {
            cout << a << " é divisível por " << b << " de forma exata." << endl;
        } else {
            cout << a << " não é divisível por " << b << " de forma exata." << endl;
        }
    } else {
        cout << "Erro: Divisão por zero." << endl;
    }

    return 0;
}
