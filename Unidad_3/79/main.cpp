/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdlib.h>
#include <iostream>

    using namespace std;

int main ()
{
    int i, n;
    float categoria_1, categoria_2, categoria_3, clave, costo;
    float impuesto, impuesto_a_pagar,valor=0;
    categoria_1 = 0;
    categoria_2 = 0;
    categoria_3 = 0;
    impuesto_a_pagar = 0;
    cout << "Ingrese el numero de autos: ";
    cin >> n;
    cin.get();
    for (i=1; i<=n; i++)
    {
        cout << "PROCESO " << i << endl;
        cout << "Ingrese el valor de clave: ";
        cin >> clave;
        cin.get();
        cout << "Ingrese el valor de costo: $";
        cin >> costo;
        cin.get();
        impuesto=0;
        if(clave==1)
        {   valor=costo*0.1;
            impuesto=valor+costo;
            categoria_1=categoria_1+impuesto;
        }
        if(clave==2)
        {   valor=costo*0.07;
            impuesto=valor+costo;
            categoria_2=categoria_2+impuesto;
        }
        if(clave==3)
        {   valor=costo*0.05;
            impuesto=valor+costo;
            categoria_3=categoria_3+impuesto;
        }
        impuesto_a_pagar=impuesto_a_pagar+impuesto;
        cout << " Valor del impuesto: $" << valor<< endl;
        cout << "Total: $" << impuesto<< endl;

        cout << endl;
    }
    cout << "Total de categoria 1: $" << categoria_1 << endl;
    cout << "Total de categoria 2: $" << categoria_2 << endl;
    cout << "Total de categoria 3: $" << categoria_3 << endl;
    cout << "Total a pagar: $" << impuesto_a_pagar << endl;
    system ("pause");
    return EXIT_SUCCESS;
}

