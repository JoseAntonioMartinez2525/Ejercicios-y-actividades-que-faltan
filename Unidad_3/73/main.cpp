#include <iostream>
#include <cmath>

using namespace std;

double exponencial(double,unsigned long int);
int factorial(unsigned long int);


int main()
{
    unsigned long int n=0;
    double x=0;

    cout<<"Ingrese el numero de elementos: ";
    cin>>n;
    cout<<"Ingrese x: ";
    cin>>x;

    cout<<"Resultado de la funcion es:  "<<exponencial(x,n)<<endl;
}

double exponencial(double x,unsigned long int n)
{
    double resultado=0; //varibale para devolver
    for (unsigned int i=0;i<=n;i++) //desde n=0 hasta donde llegue la serie
    {
        resultado+=pow(x,i)/factorial(i);   //uso de la función pow de la libreia cmath se saca esa potencia y con la función factorial se obtiene ese denominador con ese valor de n
    }
    return resultado; //devuelvo valor
}

int factorial(unsigned long int i)
{
    unsigned int resultado=1; //valor inicial 1
    if (i==0)  //si es cero se devuelve factoril 1
    {
        return resultado;
    }else     //sino se scaa el factorial
    {
        while(i>1)
        {
            resultado=resultado*i;
            i--;
        }

    return resultado;

    }
}
