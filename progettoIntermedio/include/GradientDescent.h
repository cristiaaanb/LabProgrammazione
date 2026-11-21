#ifndef gradientDescent
#define gradientDescent
#include <iostream>
#include <cmath>
#include "Point.h"

template <typename g>
double normaGrad(g gradient, Point p){
    Point gr = gradient.Gradient(p);
    double norma = std::sqrt(std::pow(gr.getX(),2) + std::pow(gr.getY(),2));
    return norma;
}

template <typename f, typename g>
void gradientDescent(f function, g gradient, double a, Point p, int n, double T){
    int k=0;
    bool trovato=false;
    while(k<n && !trovato){
        
        p = p - gradient.Gradient(p)*a;

        if(k%10==0){

            std::cout<<"iterazione numero: "<<k<<
            " - punto p al passo k-esimo: ("<< p.getX()<<","<<p.getY()<<
            ") - funzione nel punto p al passo k-esimo: "<<function.Quota(p)<<
            " - distanza (errore) dal minimo: "<< (function.Quota(p) - function.Quota(function.getMin()))<<
            " - norma : " << normaGrad(gradient, p) << std::endl;
        }
        
        k++;

        if(T>normaGrad(gradient, p)){
            trovato = true;
            std::cout<<"minimo trovato all'iterazione numero: "<<k<<std::endl;
        }
        
    }

}

#endif