#include <iostream>
#include point.h
#include Function.h
#include Grad.h
#include GradientDescent.h
using namespace std;

int main(){

    //....
    //.... fake switch

    int n;  //max iterazioni
    double a = 1/5;   //passo
    int k=0;           //indice
    double x0=1;
    double y0=1;
    
    point p = (x0,y0);

    while(k<0){
        p = Descent1(a,p);
        k++;
        if(k=10){
            std::cout<<"iterazione n°: "+k+ "punto k"+ p + " funzione nel punto k "+func1(p) + "distanza dal minimo: "
            +(func1(p)-func1.getMin());
        }
    }
    return 0;

}