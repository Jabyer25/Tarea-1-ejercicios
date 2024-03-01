#include <iostream>
using namespace std;

int main() {
    int n1,x;

    cout<<"Ingresar un numero mayor a 10 y menor a 30: ";
    cin>>n1;
    x = n1;

    for (n1 = 1; n1 <= x; n1++){
        if (n1 % 2 == 1){
            cout<< n1 <<endl;
        }
    }
    return 0;
}
