#include <iostream>
using namespace std;

int main() {
    int edad, edad1;
    cout << "Ingrese su edad: ";
    cin >> edad;

    if (edad >= 18) {
        cout << "Es mayor de edad" << endl;
    } else if (edad <17) {
        cout << "Es menor de edad" << endl;
    }

    return 0;
}
