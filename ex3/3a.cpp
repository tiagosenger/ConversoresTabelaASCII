#include <iostream>

using namespace std;

int main() {
    int a, b, c;

    cout << "Digite o valor de a: ";
    cin >> a;

    b = (a % 2 == 0) ? 2 : 1; 
    c = (a > 10) ? 10 : a;   

    cout << "Valor de a: " << a << endl;
    cout << "Valor de b: " << b << endl;
    cout << "Valor de c: " << c << endl;

    return 0;
}
