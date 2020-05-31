#include <iostream>
#include <stdlib.h>
using namespace std;

void menuTemporada(){

cout<<"1.-> Primavera: 1 marzo hasta 31 mayo"<<endl;
cout<<"2.-> Verano: 1 junio hasta 31 agosto"<<endl;
cout<<"3.-> Otoño: 1 septiembre hasta 30 noviembre"<<endl;
cout<<"4.-> Invierno: 1 diciembre hasta 28 febrero"<<endl;


}

int main()
{
    float kw, costo, pago, aumento, subsidio,consumo;
    float basico=0.793, intermedio=0.956, excedente=2.802;
    int temporada;
    bool pw=true;


    cout << "¿Cual es el consumo total de kilowatts?" << endl;cin>>kw;



 if(kw<=75)
 {
     cout<<"<===Consumo basico===>"<<endl;
     consumo=basico*kw;
      subsidio=0.60*consumo;
cout<< "Ingrese por favor el número de temporada"<<endl;
 menuTemporada();
 cin>>temporada;
 switch (temporada)
 {
 case 1: //(Costo regular)

     pago=consumo-subsidio;
     cout<<"El costo base es de: $"<<consumo<<endl;
     cout<<"No hay aumento por temporada"<<endl;
     cout<<"El costo con el apoyo del subsidio es de: $"<<pago<<endl;
     break;
 case 2://(Aumento del 25% al costo del KW)
     aumento=0.25*consumo;
     pago=(consumo+aumento)-subsidio;
     cout<<"El costo base es de: $"<<consumo<<endl;
     cout<<"El costo con el aumento de temporada es de: $"<<aumento<<endl;
     cout<<"El costo con el apoyo del subsidio es de: $"<<pago<<endl;
    break;
 case 3:
      pago=consumo-subsidio;
     cout<<"El costo base es de: $"<<consumo<<endl;
     cout<<"No hay aumento por temporada"<<endl;
     cout<<"El costo con el apoyo del subsidio es de: $"<<pago<<endl;
    break;
 case 4:
     aumento=0.25*consumo;
     pago=(consumo+aumento)-subsidio;
     cout<<"El costo base es de: $"<<consumo<<endl;
     cout<<"El costo con el aumento de temporada es de: $"<<aumento<<endl;
     cout<<"El costo con el apoyo del subsidio es de: $"<<pago<<endl;
    break;
 default:
     break;
    return 0;
 }

}else if(kw>75 && kw<=140) {
    cout<<"<===Consumo intermedio===>"<<endl;
  consumo=intermedio*kw;
      subsidio=0.60*consumo;
cout<< "Ingrese por favor el número de temporada"<<endl;
 menuTemporada();
 cin>>temporada;
 switch (temporada)
 {
 case 1: //(Costo regular)

     pago=consumo-subsidio;
     cout<<"El costo base es de: $"<<consumo<<endl;
     cout<<"No hay aumento por temporada"<<endl;
     cout<<"El costo con el apoyo del subsidio es de: $"<<pago<<endl;
     break;
 case 2://(Aumento del 25% al costo del KW)
     aumento=0.25*consumo;
     pago=(consumo+aumento)-subsidio;
     cout<<"El costo base es de: $"<<consumo<<endl;
     cout<<"El costo con el aumento de temporada es de: $"<<aumento<<endl;
     cout<<"El costo con el apoyo del subsidio es de: $"<<pago<<endl;
    break;
 case 3:
      pago=consumo-subsidio;
     cout<<"El costo base es de: $"<<consumo<<endl;
     cout<<"No hay aumento por temporada"<<endl;
     cout<<"El costo con el apoyo del subsidio es de: $"<<pago<<endl;
    break;
 case 4:
     aumento=0.25*consumo;
     pago=(consumo+aumento)-subsidio;
     cout<<"El costo base es de: $"<<consumo<<endl;
     cout<<"El costo con el aumento de temporada es de: $"<<aumento<<endl;
     cout<<"El costo con el apoyo del subsidio es de: $"<<pago<<endl;
    break;
 default:
     break;
    return 0;
 }
 }else if(kw>140){
     cout<<"<===Consumo excedente===>"<<endl;
     consumo=excedente*kw;
      subsidio=0.60*consumo;
cout<< "Ingrese por favor el número de temporada"<<endl;
 menuTemporada();
 cin>>temporada;
 switch (temporada)
 {
 case 1: //(Costo regular)

     pago=consumo-subsidio;
     cout<<"El costo base es de: $"<<consumo<<endl;
     cout<<"No hay aumento por temporada"<<endl;
     cout<<"El costo con el apoyo del subsidio es de: $"<<pago<<endl;
     break;
 case 2://(Aumento del 25% al costo del KW)
     aumento=0.25*consumo;
     pago=(consumo+aumento)-subsidio;
     cout<<"El costo base es de: $"<<consumo<<endl;
     cout<<"El costo con el aumento de temporada es de: $"<<aumento<<endl;
     cout<<"El costo con el apoyo del subsidio es de: $"<<pago<<endl;
    break;
 case 3:
      pago=consumo-subsidio;
     cout<<"El costo base es de: $"<<consumo<<endl;
     cout<<"No hay aumento por temporada"<<endl;
     cout<<"El costo con el apoyo del subsidio es de: $"<<pago<<endl;
    break;
 case 4:
     aumento=0.25*consumo;
     pago=(consumo+aumento)-subsidio;
     cout<<"El costo base es de: $"<<consumo<<endl;
     cout<<"El costo con el aumento de temporada es de: $"<<aumento<<endl;
     cout<<"El costo con el apoyo del subsidio es de: $"<<pago<<endl;
    break;
 default:
     break;
 }

 }

    return 0;



}
