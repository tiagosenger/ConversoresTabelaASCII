#include <iostream>

using namespace std;

int main() {
    unsigned char infoGenetica;

    cout << "Digite a informação genética da planta (em binário, 8 bits): ";
    cin >> infoGenetica;

    cout << "Informação genética da planta em binário: ";
    for (int i = 7; i >= 0; i--) {
        cout << ((infoGenetica >> i) & 1);
    }
    cout << endl;

    return 0;
}
