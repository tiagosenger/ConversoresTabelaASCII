#include <iostream>
#include <bitset>

using namespace std;

int main() {
    // a.
    unsigned char informacaoGenetica;

    cout << "Digite a informação genética da planta (um caractere sem sinal): ";
    cin >> informacaoGenetica;

    // b.
    bitset<8> bitsGeneticos(informacaoGenetica);
    int genesPresentes = bitsGeneticos.count();

    cout << "Número de genes presentes: " << genesPresentes << endl;

    // c.
    int geneDesejado;
    cout << "Digite o número do gene que deseja verificar (entre 1 e 8): ";
    cin >> geneDesejado;

    if (geneDesejado >= 1 && geneDesejado <= 8) {
        bool presente = bitsGeneticos.test(geneDesejado - 1);
        cout << "O gene " << geneDesejado << " está presente na planta? " << (presente ? "Sim" : "Não") << endl;
    } else {
        cout << "Número de gene inválido." << endl;
    }

    return 0;
}
