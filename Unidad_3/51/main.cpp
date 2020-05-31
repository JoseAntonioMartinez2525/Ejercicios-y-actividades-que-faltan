#include <iostream>

using namespace std;

int main()
{
int cuantos, num, suma=0, i=1;
cout<<"Suma del conjunto de números que elijas\n"<<endl;
cout<<"Cuantos quieres: ";cin>>cuantos;

while (i<=cuantos) {
cout<<"Ingrese la cantidad "<<i<<" : ";cin>>num;
suma+=num;
i++;
}cout<<endl<<endl;
cout<<"Total acumulado es de: "<<suma;
return 0;
}
