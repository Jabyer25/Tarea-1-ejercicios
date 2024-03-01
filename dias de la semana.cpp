#include <iostream>
#include <iomanip>

using namespace std;

int numero;

int main() {
    cout<<"---INGRESA UN NUMERO--- \n";

    cin>>numero;

    switch (numero) {case 1:
            cout<<"LUNES";
            break;
        case 2:
            cout<<"MARTES";
            break;
        case 3:
            cout<<"MIERCOLES";
            break;
        case 4:
            cout<<"JUEVES";
            break;
        case 5:
            cout<<"VIERNES";
            break;

    }
    return 0;
}
