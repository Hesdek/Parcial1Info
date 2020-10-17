#include <iostream>
#include <stdlib.h>
#include<time.h>
#include<math.h>
#include<cmath>
using namespace std;


int random (int,int,int);

int main()
{
    int n, cont=0,hd=0,ho=0;
    float d=0, dx=0,dy=0, timed=0, timeo=0;
    hd= random(1,0,100);
    cout << "Altura canon defensivo: " << hd << endl;
    ho= random(1,0,100);
    cout << "Altura canon ofensivo: " << hd << endl;
    int posd[2]= {100, hd},poso[2]= {1, ho};//Posiciones de los dos cañones

    dx= posd[0]-poso[0];
    dx=dx*dx;
    dy= posd[1]-poso[1];
    dy=dy*dy;
    d=dx+dy;
    d= sqrt(d);//Pitagorazo para saber la distancia con los valores de los cañones
    timed= ;
    timeo= ;






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





//https://github.com/Hesdek/Parcial1Info.git
