#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    double x, y;
    cout << "Digite as coordenadas x e y separadas por espaço: ";
    cin >> x >> y;

    double distancia = sqrt(x * x + y * y);

    cout << "A distância euclidiana até o centro de coordenadas é: " << distancia << endl;

    return 0;
}
