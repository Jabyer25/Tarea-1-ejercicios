#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cout << "Ingrese un numero: ";
    cin >> n1;
    cout << "Ingrese otro numero: ";
    cin >> n2;

    if (n1 > n2) {
        cout << "El primer numero es mayor" << endl;
    } else if (n2 > n1) {
        cout << "El segundo numero es mayor" << endl;
    } else if (n2 = n1) {
        cout << "Los dos numeros son iguales" << endl;
    }

    return 0;
}
