#include <iostream>
#include <climits>

using namespace std;

int main() {
    // a.
    int numero;

    // b.
    cout << "Digite um número inteiro: ";
    cin >> numero;

    cout << "O valor fornecido é: " << numero << " e é "
         << ((numero > SHRT_MAX || numero < SHRT_MIN) ? "maior que um short int" : "este valor pertence ao intervalo dos short int") << endl;

    return 0;
}
