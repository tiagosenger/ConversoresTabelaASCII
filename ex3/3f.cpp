// O C++ oferece a bibliotecaa "cmath", que além de outras funções matemáticas, permite calcular o módulo (valor absoluto) da diferença entre dois valores inteiros usando a biblioteca padrão.

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a = 10; 
    int b = 5;  

    int c = abs(a - b);

    cout << "O módulo da diferença entre a e b é: " << c << endl;

    return 0;
}
