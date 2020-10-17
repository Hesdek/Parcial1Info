#include <iostream>
#include <stdlib.h>
#include<time.h>
#include<math.h>
using namespace std;


int random (int,int,int);

int main()
{
    int n, cont=0,hd=0,ho=0;
    hd= random(1,0,100);
    cout << "Altura canon defensivo: " << hd << endl;
    ho= random(1,0,100);
    cout << "Altura canon ofensivo: " << hd << endl;




    //while(array[cont]!='\0'){cont++;}
    //for (int i=0; i<100; i++)


}
int random (int n, int desde, int hasta){
    int aleatorio;
    for (int i = 1; i <= n; i ++){
    aleatorio = rand()%(hasta-desde+1)+desde;
    return aleatorio;
            }
}
