#include <iostream>

using namespace std;

int main()
{//variables:
    float m3,costo, edad, desc=.30, T, subt;
    cout << "¿Cuantos metros cúbicos de agua gasto?!" << endl;cin>>m3;
    cout<<"¿Cual es el costo por metro cubico?"<<endl;cin>>costo;
    cout<<"¿¿Cual es la edad del usuario?"<<endl;cin>>edad;

    T=m3*costo;

    if(edad>60){
        subt=T-(T*desc);
        cout<<"El costo que debera pagar es de:  $"<<T<<" aplica un descuento por apoyo a la 3ra edad, el total sera de: $"<<subt<<endl;
    }else{
    cout<<"El costo que debera pagar es de:  $"<<T<<endl;
    }


    return 0;
}
