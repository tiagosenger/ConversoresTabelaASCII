#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // a.
    int num1, num2, result;

    // b.
    cout << "Digite dois números inteiros: ";
    cin >> num1 >> num2;

    // c.
    result = num1 + num2;
    cout << "Soma em formato hexadecimal: " << hex << result << endl;

    // d.
    result = num1 * num2;
    cout << "Produto em formato octal: " << oct << result << endl;

    // e.
    result = abs(num1 - num2);
    cout << "Módulo da diferença: " << result << endl;

    // f.
    if (num2 != 0) {
        // g.
        result = num1 / num2;
        cout << "Quociente: " << result << endl;

        // h.
        if (num1 % num2 == 0) {
            cout << "a é divisível de forma exata por b." << endl;
        } else {
            cout << "a não é divisível de forma exata por b." << endl;
        }
    } else {
        cout << "Divisão por zero não é possível." << endl;
    }

    return 0;
}
