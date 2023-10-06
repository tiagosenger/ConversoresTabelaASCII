#include <iostream>

using namespace std;

int main() {
    int a, b;
    cout << "Digite o valor de a: ";
    cin >> a;
    cout << "Digite o valor de b: ";
    cin >> b;

    if (b == 0) {
        cout << "Divisão por zero não é possível." << endl;
    } else {
        double c = static_cast<double>(a) / b;
        cout << "Resultado da divisão (a / b): " << c << endl;
    }

    return 0;
}
