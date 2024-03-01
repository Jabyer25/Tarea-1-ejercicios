#include <iostream>
using namespace std;

int main() {
    int i, n;
    float factorial;
    cout<< "Ingresar un numero: ";
    cin>> n;
    i = 1;
    factorial = 1;
    while (i <= n){
        factorial = factorial * i;
        i++;
    }
    cout<< "El factorial de "<<n<<" es: "<<factorial;


    return 0;
}
