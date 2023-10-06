#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
    double x = 10.5; 
    double y = 3.0;
    double z = x * y;

    cout << scientific;

    cout << "O resultado em notação científica: " << z << endl;

    return 0;
}
