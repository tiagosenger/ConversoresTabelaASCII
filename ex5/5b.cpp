#include <iostream>

using namespace std;

int contarGenesPresentes(unsigned char infoGenetica) {
    int contador = 0;

    for (int i = 0; i < 8; i++) {
        if ((infoGenetica >> i) & 1) {
            contador++;
        }
    }

    return contador;
}

int main() {
    unsigned char infoGenetica;

    cout << "Digite a informação genética da planta (em binário, 8 bits): ";
    cin >> infoGenetica;

    int genesPresentes = contarGenesPresentes(infoGenetica);

    cout << "Número de genes presentes: " << genesPresentes << endl;

    return 0;
}

