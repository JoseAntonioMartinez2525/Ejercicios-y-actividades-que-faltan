#include <iostream>
#include <conio.h>
using namespace std;

int main() {
double d, s, vh;
int h,i,n,x;
char nom[20];

cout<<"Ingrese numero de trabajadores"<<endl;
cin>>n;
i = 1;

while (i<=n){

cout<<"trabajador : "<<i<<endl;
cout<<"Ingrese el nombre del trabajador:  ";cin>>nom;
cout<<"Ingrese cantidad de horas trabajadas"<<endl;
cin>>h;
cout<<"Ingrese valor por hora :$";cin>>vh;
s = (h*vh);
if ((s>=0) && (s<=150)) {
d = (s*0.05);
cout<<"Descuento: 5%"<<endl;
cout<<"Valor del Descuento aplicado: $"<<d<<endl;
x = s-d;
} else {
if ((s>150) && (s<300)) {
d = (s*0.07);
cout<<"Descuento: 7%"<<endl;
cout<<"Valor del Descuento aplicado: $"<<d<<endl;
x = s-d;
} else {
if ((s>300) && (s<450)) {
d = (s*0.09);
cout<<"Descuento: 9%"<<endl;
cout<<"Valor del Descuento aplicado: $"<<d<<endl;
x = s-d;
}

}
}
cout<<"El sueldo semanal de "<<nom;cout<<" es de: $"<<x;
i++;
cout<<endl;
}
getch();
}
