#include <iostream>
using namespace std;

int main() {
    int n1;
    cout << "Ingrese un numero entero: ";
    cin >> n1;

    if (n1%2==0) {
        cout << "El numero es par" << endl;
    } else{
        cout << "El numero es impar" << endl;
    }

    return 0;
}
