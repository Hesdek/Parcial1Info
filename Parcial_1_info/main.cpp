#include <iostream>
#include <stdlib.h>
#include<time.h>
#include<math.h>
#include<cmath>

using namespace std;


int random (int,int,int);

int main()
{
    int hd=0,ho=0,v0d=0,v0o=0,ejercicio=0, count=0;
    float timed=0, timeo=0,g=9.81,angd=0,ango=0;
    hd= random(1,1,200);
    ho=hd;
    cout << "Altura canon defensivo: " << hd << endl;
    cout << "Altura canon ofensivo: " << ho << endl;
    int posd[2]= {600, hd},poso[2]= {0, ho};//Posicion del canon ofensivo

    cout << "Ingrese el angulo del ataque: ";
    cin>>ango;
    angd=ango;


    cout <<endl<<"| Que caso quiere simular:                         |"<<endl;
    cout << "| Generar disparos contra el canon defensivo    (1)|"<< endl;
    cout << "| Generar disparos contra el canon ofensivo     (2)|"<< endl;
    cout << "| Generar disparos que defiendan                (3)|"<< endl;
    cout << "| Generar disparos que defiendan y sin destruir (4)|"<< endl;
    cin >> ejercicio;

    if (ejercicio==1){
        int ang=ango;
        ango=ango*3.14159/180;
        float vy0=0, vx0=0,pita=0;
        for (v0o=0;v0o<=100;v0o+=2){
            vx0= v0o*cos(ango);
            vy0= v0o*sin(ango);
            for (timeo=0; timeo<100; timeo+=0.5){
                float x= vx0*timeo;
                float y= ho + vy0*timeo - (0.5*g*timeo*timeo);
                pita=pow(posd[0]-x,2)+pow(posd[1]-y,2);
                pita= sqrt(pita);
                if (pita<=0.5*posd[0]){
                    cout << endl<< "Velocidad: "<< v0o<<", Tiempo: "<< timeo<< ", Angulo: "<< ang;
                    count+=1;
                    break;
                }
                if (count==3){
                    break;
                    return 0;
            }
            }
        }}

    else if (ejercicio==2){
        int ang=0;
        ang=angd;
        angd=angd*3.14159/180;
        float vy0=0, vx0=0,pita=0;
        for (v0d=0;v0d<=100;v0d+=2){
            vx0= v0d*cos(angd);
            vy0= v0d*sin(angd);
            for (timed=0; timed<100; timed+=0.5){
                float x= vx0*timed;
                float y= ho + vy0*timed - (0.5*g*timed*timed);
                pita=pow(poso[0]-x,2)+pow(poso[1]-y,2);
                pita= sqrt(pita);
                if (pita<=0.5*poso[0]){
                    cout << endl<< "Velocidad: "<< v0d<<", Tiempo: "<< timed<< ", Angulo: "<< ang;
                    count+=1;
                    break;
                }
                if (count==3){
                    break;
                    return 0;
            }
            }
        }}
    else if (ejercicio==3){
        int ang=0;
        ang=ango;
            ango=ango*3.14159/180;
            float vy0=0, vx0=0,pita=0;
            for (v0o=0;v0o<=100;v0o+=2){
                vx0= v0o*cos(ango);
                vy0= v0o*sin(ango);
                for (timeo=0; timeo<=100; timeo+=0.5){
                    float x= vx0*timeo;
                    float y= ho + vy0*timeo - (0.5*g*timeo*timeo);
                    pita=pow(posd[0]-x,2)+pow(posd[1]-y,2);
                    pita= sqrt(pita);
                    if (pita<=0.5*posd[0]){
                        cout << endl<< "Velocidad: "<< v0o<<", Tiempo: "<< timeo<< ", Angulo: "<< ang;
                        break;
                    }break;
                }break;
            }
            timeo=2.5;
            float x= vx0*timeo;
            float y= ho + vy0*timeo - (0.5*g*timeo*timeo);
            cout << "Datos del infiltrado: "<<endl;
            cout << "Angulo enemigo: "<< ang <<endl;
            cout << "Velocidad inicial enemigo: "<<v0o <<endl;
            cout << "Posicion actual X: "<< x <<endl;
            cout << "Posicion actual Y: "<< y <<endl;
}

    else if (ejercicio==4){
        int ang=0;
        ang=ango;
            ango=ango*3.14159/180;
            float vy0=0, vx0=0,pita=0;
            for (v0o=0;v0o<=100;v0o+=2){
                vx0= v0o*cos(ango);
                vy0= v0o*sin(ango);
                for (timeo=0; timeo<=100; timeo+=0.5){
                    float x= vx0*timeo;
                    float y= ho + vy0*timeo - (0.5*g*timeo*timeo);
                    pita=pow(posd[0]-x,2)+pow(posd[1]-y,2);
                    pita= sqrt(pita);
                    if (pita<=0.5*posd[0]){
                        cout << endl<< "Velocidad: "<< v0o<<", Tiempo: "<< timeo<< ", Angulo: "<< ang;
                        break;
                    }break;
                }break;
            }
            timeo=2.5;
            float x= vx0*timeo;
            float y= ho + vy0*timeo - (0.5*g*timeo*timeo);
            cout << "Datos del infiltrado: "<<endl;
            cout << "Angulo enemigo: "<< ang <<endl;
            cout << "Velocidad inicial enemigo: "<<v0o <<endl;
            cout << "Posicion actual X: "<< x <<endl;
            cout << "Posicion actual Y: "<< y <<endl;


    }
}

int random (int n, int desde, int hasta){
    int aleatorio;
    for (int i = 1; i <= n; i ++){
    aleatorio = rand()%(hasta-desde+1)+desde;
            }
        return aleatorio;
}







//https://github.com/Hesdek/Parcial1Info.git
