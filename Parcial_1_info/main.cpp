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
    int hd=0,ho=0,v0d=0,v0o=0, angd=0,ango=0,x=0,y=0;
    float d=0, dx=0,dy=0, timed=0, timeo=0,eje_x_o=0;
    hd= random(1,1,100);
    cout << "Altura canon defensivo: " << hd << endl;
    ho= random(1,1,100);
    cout << "Altura canon ofensivo: " << hd << endl;
    int posd[2]= {300, hd},poso[2]= {1, ho};//Posicion del canon ofensivo


    v0o=random(1,0,100);//Velocidades random del cañon inicial
    cout << "velocidad canon ofensivo: " << v0o << endl;

    dx= posd[0]-poso[0];
    dx=dx*dx;
    dy= posd[1]-poso[1];
    dy=dy*dy;
    d=dx+dy;
    d= sqrt(d);//Pitagorazo para saber la distancia con los valores de los cañones
    cout <<"Distancia entre los canones: " << d<< endl;

    timeo= times(d,v0o);//tiempo ofensivo

    ango=random(1,91,180);//angulo random del cañon inicial
    cout << "angulo canon ofensivo: " << ango << endl;

    //Eje horizontal x del ofensivo
    eje_x_o=(v0o*timeo)+poso[1];
    cout << endl << eje_x_o;

    //alcance maximo cañon ofensivo
    x=(v0o*v0o)*cos(ango)/9.81;
    cout << "Alcance en X maximo: " << x;

    if (x==poso[0]){
       //El cañón ofensivo es peligroso y va a golpear al cañon defensivo, requiere defenderse


}




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
