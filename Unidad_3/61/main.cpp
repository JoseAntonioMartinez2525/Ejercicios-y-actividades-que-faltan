#include <iostream>

using namespace std;

int main(){

int mensualidad=5, T=0;

for( int i = 1; i <= 20; i++ ){
cout<<"Cantidad del pago: "<< i <<endl;
mensualidad = mensualidad * 2;
cout<<" $"<<mensualidad<<endl;
T+=mensualidad;


}
cout<<"Total a pagar: $"<<T<<endl;
return 0;
}
