#include <stdio.h>
#include <iostream>

using namespace std;

int suma(int lista[],int n)
{
    int resul=0;
    resul+=lista[n-1];
    if(n==0)
        return resul;
    else
        suma(lista,n-1);
}

int main()
{
    int n;
    cout<<"Ingrese la cantidad de elementos de la lista: ";
    cin>>n;
    int lista[n];
    for(int x=0;x<n;x++)
    {
        cout<<"Ingrese valor"<<x+1<<" : ";
        cin>>lista[x];
    }
    cout<<suma(lista,n);

}
