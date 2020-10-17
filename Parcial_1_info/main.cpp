#include <iostream>
using namespace std;


int random (int);

int main()
{
    int n, cont=0;
    cout << "Ingrese la cadena 1: ";
    cin>>n;
    //while(array[cont]!='\0'){cont++;}
    //for (int i=0; i<100; i++)


}
int random (int n){
    int aleatorio, desde=0, hasta=100;
    for (int i = 1; i <= n; i ++){
    aleatorio = rand()%(hasta-desde+1)+desde;
    return aleatorio;
            }
}
