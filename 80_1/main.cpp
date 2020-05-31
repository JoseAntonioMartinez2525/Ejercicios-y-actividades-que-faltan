#include <iostream>

using namespace std;

int main()
{
    float pago_min= 0, pago_ev=0, saldoActual=0, pago=0, intereses=0;
    int n=0, i=0, morosos=0;

    cout<<"Numero de clientes: "<<endl;cin>>n;
    for (i=1;i<=n ;i++ ){
    cout<<"Cliente #"<<i<<endl;
    cout<<"Saldo actual: $";cin>>saldoActual;
    cout<<"Pago minimo: $";cin>>pago_min;
    cout<<"Pago para evitar intereses: $";cin>>pago_ev;
    cout<<"¿Cuanto pago el cliente?: $";cin>>pago;
    cout<<endl;
    if (pago<pago_ev){
        intereses+=pago_ev-pago;
        morosos++;
    }

        }
   cout<<"Total de clientes morosos: "<<morosos<<endl;
   cout<<"Total de ganancias: $"<<intereses<<endl;



    return 0;
}
