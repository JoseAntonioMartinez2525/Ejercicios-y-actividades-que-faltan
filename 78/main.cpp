#include <iostream>
#include <math.h>
#include<conio.h>
#include <stdlib.h>
using namespace std;

int main() {
 int aa,av,i,r,j;
 float vv,P;
 av = 1962;
 vv = 1500;
 i = 0;
j=av+1;
 cout<<"Ingrese annio actual\n";cin>>aa;
 r = (aa-av);
 while (i<=r &&av<=aa) {
  P = (vv*0.15);
  vv = (vv+P);
  cout<<"La inversion en el annio: "<<av++<<" es: $"<<vv<<endl;
  i = i+1;

 }
cout<<"El valor de la inversión al actual anio es de: $"<<vv<<endl;
 getch();

}
