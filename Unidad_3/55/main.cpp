#include <iostream>

using namespace std;

int main() {

int i,numero,num,sonCero=0,menores=0,mayores=0;

cout << "Cuantos numeros desea procesar: ";
cin >> num;

for (i=1; i<=num; i++) {
cout << "Ingrese un numero: ";
cin >> numero;

if (numero == 0){
sonCero++;
}else if (numero < 0){
menores++;
}else{
mayores++;
}

}

cout << endl << "Numeros iguales a cero " << sonCero << endl;
cout << "Numeros menores que cero " << menores << endl;
cout << "Numeros mayores que cero " << mayores << endl;


return 0;
}
