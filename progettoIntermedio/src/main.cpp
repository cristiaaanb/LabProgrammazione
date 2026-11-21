#include <iostream>
#include <cmath>
#include "Point.h"
#include "Function.h"
#include "Grad.h"
#include "gradientDescent.h"
using namespace std;

int main(){

    int n=100;              //max iterazioni
    double a;               //passo
    double T=0.000001;      //tolleranza
    int k=0;                //indice
    double x0;              //punto generico iniziale
    double y0;
    int scelta;

    std::cout<<"Inserisci la funzione che vuoi analizzare (1-8) : "<<endl;
    cin >> scelta;

    //controllo sulla scelta
    while(scelta<=0 || scelta >8){

        std::cout<<"Attenzione, re-inserire un numero da 1 a 8 per selezionare la funzione : "<<endl;
        cin >> scelta;

    }
    
    //check del punto sul dominio 
    std::cout<<"- Inserisci le coordinate del punto da cui partire -"<<endl;
    std::cout<<"Valore iniziale di x0: "<<endl;
    cin >> x0;
    std::cout<<"Valore iniziale di y0: "<<endl;
    cin >> y0;
    Point p{x0,y0};

    Point dominio[8] = {
        Point{-4,4},Point{-4,4},Point{-1.5,1.5},Point{-1.5,1.5},Point{-2,2},Point{-4,4},Point{-1.5,1.5},Point{-4,4}
    };

    double k1=1; //costanti (qualsiasi numero pari va bene come minimo nell ottava funzione)
    double k2=2;

    Point minimi[8] = {
        Point{0,0},Point{0,0},Point{1,0},Point{1,0},Point{0,0},Point{0,0},Point{0,0},Point{2*k1,2*k2}
    };

    while(p.getX()<dominio[scelta-1].getX() || p.getX()>dominio[scelta-1].getY() || p.getY()<dominio[scelta-1].getX() || p.getY()>dominio[scelta-1].getY()){

        std::cout<<"Errore, punto iniziale fuori dal dominio consentito"<<endl;
        std::cout<<"- Inserisci le coordinate del punto da cui partire -"<<endl;
        std::cout<<"Valore iniziale di x0: "<<endl;
        cin >> x0;
        std::cout<<"Valore iniziale di y0: "<<endl;
        cin >> y0;
        p = Point{x0,y0};

    }  

    switch(scelta){
        case 1:
        a = 0.2;
        gradientDescent(Function1{p,minimi[scelta-1]}, Grad1{p}, a , p , n , T);
        break;

        case 2:
        a = 0.08;
        gradientDescent(Function2{p,minimi[scelta-1]}, Grad2{p}, a , p , n , T);
        break;

        case 3:
        a = 0.05;
        if(p.getX()<0){
            minimi[scelta-1] = Point{-1,0};
        }
        gradientDescent(Function3{p,minimi[scelta-1]}, Grad3{p}, a , p , n , T);
        break;

        case 4:
        a = 0.05;
        gradientDescent(Function4{p,minimi[scelta-1]}, Grad4{p}, a , p , n , T);
        break;

        case 5:
        a = 0.15;
        gradientDescent(Function5{p,minimi[scelta-1]}, Grad5{p}, a , p , n , T);
        break;

        case 6:
        a = 0.3;
        gradientDescent(Function6{p,minimi[scelta-1]}, Grad6{p}, a , p , n , T);
        break;

        case 7:
        a = 0.2;
        gradientDescent(Function7{p,minimi[scelta-1]}, Grad7{p}, a , p , n , T);
        break;

        case 8:
        a = 0.1;
        gradientDescent(Function8{p,minimi[scelta-1]}, Grad8{p}, a , p , n , T);
        break;

    }

    return 0;

}