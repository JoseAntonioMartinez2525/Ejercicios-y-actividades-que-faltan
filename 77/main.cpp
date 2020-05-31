#include<conio.h>
#include<stdio.h>
#include<iostream.h>
#include<math.h>


int main() {
 int g;
 int h;
 int i;
 int n;
 int ni;
 int nn;
 int np;
 int r;
 int x;
 cout<<"Ingrese el total de numeros a calcular\n";
 cin>>n;
 i = 0;
 h = 0;
 while (i<n) {
  r = 0;
  do {
   h = h+1;
cout<<"Ingrese valor de numero "<<h<<endl;
    cin>>ni;
   if (ni<=0) {
    h = 0;
    cout<<"El numero ingresado no es positivo\n";
   }
  } while ((ni<=0));
  r = pow(ni,3);
  cout<<"El cubo del numero: " <<ni<<"= "<<r<<endl;
  i = i+1;



}
 getch();

}

