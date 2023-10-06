#include <iostream>

using namespace std;

int main() {
    char ch2 = 'A'; 
    char ch3 = tolower(ch2);

    cout << "Caractere minúsculo em formato decimal: " << static_cast<int>(ch3) << endl;
    cout << "Caractere minúsculo em formato octal: " << oct << static_cast<int>(ch3) << endl;
    cout << "Caractere minúsculo em formato hexadecimal: " << hex << static_cast<int>(ch3) << endl;
    cout << "Caractere minúsculo: " << ch3 << endl;

    return 0;
}
