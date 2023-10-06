#include <iostream>

using namespace std;

int main() {
    int a = 10;
    int b = 5;
    int c = (a > b) ? (a - b) : (b - a); 

    cout << "O módulo da diferença entre a e b é: " << c << endl;

    return 0;
}
