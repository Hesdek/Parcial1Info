#include <iostream>
#include <stdlib.h>
#include<time.h>
#include<math.h>
#include<cmath>
using namespace std;


int random (int,int,int);
float times (float,int);

int main()
{
    int hd=0,ho=0,v0d=0,v0o=0, angd=0,ango=0;
    float d=0, dx=0,dy=0, timed=0, timeo=0;
    hd= random(1,0,100);
    cout << "Altura canon defensivo: " << hd << endl;
    ho= random(1,0,100);
    cout << "Altura canon ofensivo: " << hd << endl;
    int posd[2]= {100, hd},poso[2]= {1, ho};//Posiciones de los dos cañones

    v0d=random(1,0,100);//Velocidades random del cañon inicial
    cout << "velocidad canon defensivo: " << v0d << endl;
    v0o=random(1,0,100);//Velocidades random del cañon inicial
    cout << "velocidad canon ofensivo: " << v0o << endl;

    dx= posd[0]-poso[0];
    dx=dx*dx;
    dy= posd[1]-poso[1];
    dy=dy*dy;
    d=dx+dy;
    d= sqrt(d);//Pitagorazo para saber la distancia con los valores de los cañones
    cout << endl << d;

    timed= times(d,v0d);//tiempo difensivo
    timeo= times(d,v0o);//tiempo ofensivo

    angd=random(1,0,89);//angulo random del cañon inicial
    cout << "angulo canon defensivo: " << angd << endl;
    ango=random(1,1,89);//angulo random del cañon inicial
    cout << "angulo canon ofensivo: " << ango << endl;


}


int random (int n, int desde, int hasta){
    int aleatorio;
    for (int i = 1; i <= n; i ++){
    aleatorio = rand()%(hasta-desde+1)+desde;
            }
        return aleatorio;
}

float times (float distancia, int velocidad){
    float time=0;
    time=distancia/velocidad;
    return time;

}





//https://github.com/Hesdek/Parcial1Info.git




//while(array[cont]!='\0'){cont++;}
//for (int i=0; i<100; i++)
