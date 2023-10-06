#include <iostream>
#include <cctype>

using namespace std;

int main() {
    char ch1, ch2, ch3;

    cout << "Digite um caractere: ";
    cin >> ch1;

    (isupper(ch1)) ? cout << "É uma letra maiúscula." :
    (islower(ch1)) ? cout << "É uma letra minúscula." :
    (isdigit(ch1)) ? cout << "É um dígito." :
    cout << "É outro tipo de caractere.";

    //Letra (E)

    ch2 = 81;

    cout << "Formato decimal: " << dec << static_cast<int>(ch2) << endl;
    cout << "Formato octal: " << oct << static_cast<int>(ch2) << endl;
    cout << "Formato hexadecimal: " << hex << static_cast<int>(ch2) << endl;
    cout << "Formato caractere: " << ch2 << endl;

    // Letra (F)
    ch2 = 'A'; // Supondo que 'A' seja a letra maiúscula
    ch3 = tolower(ch2);

    cout << "Formato decimal: " << dec << static_cast<int>(ch3) << endl;
    cout << "Formato octal: " << oct << static_cast<int>(ch3) << endl;
    cout << "Formato hexadecimal: " << hex << static_cast<int>(ch3) << endl;
    cout << "Formato caractere: " << ch3 << endl;


    return 0;
}
