#ifndef GradientDescent
#define GradientDescent
#include Function.h
#include Grad.h
#include point.h


class GradientDescent{

    public:
        
        GradientDescent();
        explicit GradientDescent();
        ~GradientDescent();

        point Descent(point p, Function f);
        int getN();

    private:

        double a;       //passo
        point p0;       //posizione iniziale
        double T;       //soglia norma del gradiente

}

GradientDescent::Descent1(double a, point p0){

    N=this.N;
    a=this.a;
    p0 = this.p0;
    
    point Descent(point p, func1){
        
        p0 = p0 - a*Grad1(p0);
        return p0;
    }

}

GradientDescent::Descent2(double a, point p0){

    a=this.a;
    p0 = this.p0;
    
    point Descent(point p, func1){
        
        p0 = p0 - a*Grad2(p0);
        return p0;
    }

}

GradientDescent::Descent3(double a, point p0){

    a=this.a;
    p0 = this.p0;
    
    point Descent(point p, func1){
        
        p0 = p0 - a*Grad3(p0);
        return p0;
    }

}

GradientDescent::Descent4(double a, point p0){

    a=this.a;
    p0 = this.p0;
    
    point Descent(point p, func1){
        
        p0 = p0 - a*Grad4(p0);
        return p0;
    }

}

GradientDescent::Descent5(double a, point p0){

    a=this.a;
    p0 = this.p0;
    
    point Descent(point p, func1){
        
        p0 = p0 - a*Grad5(p0);
        return p0;
    }

}

GradientDescent::Descent6(double a, point p0){

    a=this.a;
    p0 = this.p0;
    
    point Descent(point p, func1){
        
        p0 = p0 - a*Grad6(p0);
        return p0;
    }

}

GradientDescent::Descent7(double a, point p0){

    a=this.a;
    p0 = this.p0;
    
    point Descent(point p, func1){
        
        p0 = p0 - a*Grad7(p0);
        return p0;
    }

}

GradientDescent::Descent8(double a, point p0){

    a=this.a;
    p0 = this.p0;
    
    point Descent(point p, func1){
        
        p0 = p0 - a*Grad8(p0);
        return p0;
    }

}