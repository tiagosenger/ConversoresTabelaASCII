#include <iostream>

using namespace std;

int main() {
    char caractere;

    cout << "Digite um caractere: ";
    cin >> caractere;

    if (caractere >= 'A' && caractere <= 'Z') {
        cout << "É uma letra maiúscula." << endl;
    } else if (caractere >= 'a' && caractere <= 'z') {
        cout << "É uma letra minúscula." << endl;
    } else if (caractere >= '0' && caractere <= '9') {
        cout << "É um dígito." << endl;
    } else {
        cout << "É outro tipo de caractere." << endl;
    }

    return 0;
}
