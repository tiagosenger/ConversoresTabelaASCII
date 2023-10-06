#include <iostream>

using namespace std;

bool verificarGeneEspecifico(unsigned char infoGenetica, int geneDesejado) {
    if (geneDesejado < 1 || geneDesejado > 8) {
        cout << "Número de gene inválido. Deve estar entre 1 e 8." << endl;
        return false;
    }

    bool presente = (infoGenetica >> (geneDesejado - 1)) & 1;

    return presente;
}

int main() {
    unsigned char infoGenetica;
    int geneDesejado;

    cout << "Digite a informação genética da planta (em binário, 8 bits): ";
    cin >> infoGenetica;

    cout << "Digite o número do gene que deseja verificar (entre 1 e 8): ";
    cin >> geneDesejado;

    if (verificarGeneEspecifico(infoGenetica, geneDesejado)) {
        cout << "O gene " << geneDesejado << " está presente nesta planta." << endl;
    } else {
        cout << "O gene " << geneDesejado << " não está presente nesta planta." << endl;
    }

    return 0;
}


