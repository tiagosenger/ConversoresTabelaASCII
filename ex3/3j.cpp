#include <iostream>
#include <climits>

using namespace std;

int main() {
    int valorFornecido;
    
    cout << "Digite um valor inteiro: ";
    cin >> valorFornecido;

    string resultado = (valorFornecido >= SHRT_MIN && valorFornecido <= SHRT_MAX) ? "este valor pertence ao intervalo dos short int" : "e maior que um short int";

    cout << valorFornecido << " " << resultado << endl;

    return 0;
}
