#include <iostream>

using namespace std;

double p(double x) {
    return x * x;
}

int main() {
    double x;

    cout << "Digite um valor para x: ";
    cin >> x;

    double resultado = p(x);

    cout << "O valor de p(" << x << ") é: " << resultado << endl;

    return 0;
}
