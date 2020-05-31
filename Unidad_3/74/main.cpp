#include <iostream>

using namespace std;

int main ()
{
    int billetes,billeteTipo, total, tipos=0, tbilletes=0;
    int monedas, monedasTipo, tmonedas;
    cout<<"¿Cuantos tipos de billetes tiene?"<<endl;cin>>tipos;
    for (int i=1;i<=tipos ;i++ ){
      cout<<"Cantidad de billetes tipo: "<<i<<" : ";cin>>billetes;
        cout<<"Valor del billete: $";cin>>billeteTipo;
        tbilletes+=billetes*billeteTipo;
        }cout<<endl<<endl;
    cout<<"¿Cuantos tipos de monedas tiene?"<<endl;cin>>tipos;
    for (int j=1;j<=tipos ;j++ ){
      cout<<"Cantidad de monedas tipo: "<<j<<" : ";cin>>monedas;
        cout<<"Valor de la moneda: $";cin>>monedasTipo;
        tmonedas+=monedas*monedasTipo;
        }
        total=tbilletes+tmonedas;cout<<endl;
cout<<"Total en caja: $"<<total<<endl;

    return 0;
}
