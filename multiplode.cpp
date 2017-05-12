#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int n1, n2, may, men;
   // String msj = "";
    cout << "Ingrese primer numero" << endl;
    cin >> n1;
    cout << "Ingrese segundo numero" << endl;
    cin >> n2;
    if(n1 != n2){
        if(n1>n2){
            may = n1;
            men = n2;
        }else{
            may = n2;
            men = n1;
        }
        if(may % men == 0){
            cout << may << " es multiplo de " << men << endl;
        }else{
            cout << may << " no es multiplo de " << men << endl;
        }
    }else{
        cout << "los numeros son iguales" << endl;
    }
    return 0;
}
