#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int numero;
    int aux;
    int invertido = 0;
    cout << "Ingrese el numero" << endl;
    cin >> numero;
    aux = numero;
    while(aux > 0){
        invertido = invertido*10+aux%10;
        aux = aux/10;
    }
    if(numero == invertido){
        cout << "El numero es capicua" << endl;
    }else{
        cout << "El numero no es capicua" << endl;
    }

    return 0;
}
