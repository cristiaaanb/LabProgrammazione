#ifndef Function_h
#define Function_h
#include "Point.h"
#include <cmath>

class Function1{

    public:
        
        Function1();
        Function1(Point p, Point min);

        Point  getP() const;
        Point  getMin() const;

        double Quota(Point p);

    private:

        Point p;    //punto p
        Point min;  //punto di minimo

};

Point Function1::getP()const{
    return p;
}
Point Function1::getMin()const{
    return min;
}

Function1::Function1(): p{0,0}, min{0,0}{}
Function1::Function1(Point p,Point min): p{p.getX(),p.getY()}, min{min.getX(),min.getY()}{}

double Function1::Quota(Point p){
    double quota = (pow(p.getX(), 2) + pow(p.getY(),2))/2;
    return quota;
}

class Function2{

    public:
        
        Function2();
        Function2(Point p, Point min);

        Point  getP() const;
        Point  getMin() const;

        double Quota(Point p);

    private:

        Point p;    //punto p
        Point min;  //punto di minimo

};

Point Function2::getP()const{
    return p;
}
Point Function2::getMin()const{
    return min;
}

Function2::Function2(): p{0,0}, min{0,0}{}
Function2::Function2(Point p,Point min): p{p.getX(),p.getY()}, min{min.getX(),min.getY()}{}

double Function2::Quota(Point p){
        double quota = (pow(p.getX(), 2) + 16*pow(p.getY(),2))/2;
        return quota;
}

class Function3{

    public:
        
        Function3();
        Function3(Point p, Point min);

        Point  getP() const;
        Point  getMin() const;

        double Quota(Point p);

    private:

        Point p;    //punto p
        Point min;  //punto di minimo

};

Point Function3::getP()const{
    return p;
}
Point Function3::getMin()const{
    return min;
}

Function3::Function3(): p{0,0}, min{0,0}{}
Function3::Function3(Point p,Point min): p{p.getX(),p.getY()}, min{min.getX(),min.getY()}{}

double Function3::Quota(Point p){
        double quota = pow(pow(p.getX(), 2) - 1, 2) + pow(p.getY(), 2);
        return quota;
}

class Function4{

    public:
        
        Function4();
        Function4(Point p, Point min);

        Point  getP() const;
        Point  getMin() const;

        double Quota(Point p);

    private:

        Point p;    //punto p
        Point min;  //punto di minimo

};

Point Function4::getP()const{
    return p;
}
Point Function4::getMin()const{
    return min;
}

Function4::Function4(): p{0,0}, min{0,0}{}
Function4::Function4(Point p,Point min): p{p.getX(),p.getY()}, min{min.getX(),min.getY()}{}

double Function4::Quota(Point p){
    double quota = pow(pow(p.getX(), 2) - 1, 2) + pow((p.getX() - 1), 2)/5 + pow(p.getY(), 2);
    return quota;
}

class Function5{

    public:
        
        Function5();
        Function5(Point p, Point min);

        Point  getP() const;
        Point  getMin() const;

        double Quota(Point p);

    private:

        Point p;    //punto p
        Point min;  //punto di minimo

};

Point Function5::getP()const{
    return p;
}
Point Function5::getMin()const{
    return min;
}

Function5::Function5(): p{0,0}, min{0,0}{}
Function5::Function5(Point p,Point min): p{p.getX(),p.getY()}, min{min.getX(),min.getY()}{}

double Function5::Quota(Point p){
    double quota = 4*( pow(sinh(p.getX()/2),2)) + pow(p.getY(), 2);
    return quota;
}

class Function6{

    public:
        
        Function6();
        Function6(Point p, Point min);

        Point  getP() const;
        Point  getMin() const;

        double Quota(Point p);

    private:

        Point p;    //punto p
        Point min;  //punto di minimo

};

Point Function6::getP()const{
    return p;
}
Point Function6::getMin()const{
    return min;
}

Function6::Function6(): p{0,0}, min{0,0}{}
Function6::Function6(Point p,Point min): p{p.getX(),p.getY()}, min{min.getX(),min.getY()}{}

double Function6::Quota(Point p){
    double quota = log(1 + pow(p.getX(), 2) + pow(p.getY(),2));
    return quota;
}

class Function7{

    public:
        
        Function7();
        Function7(Point p, Point min);

        Point  getP() const;
        Point  getMin() const;

        double Quota(Point p);

    private:

        Point p;    //punto p
        Point min;  //punto di minimo

};

Point Function7::getP()const{
    return p;
}
Point Function7::getMin()const{
    return min;
}

Function7::Function7(): p{0,0}, min{0,0}{}
Function7::Function7(Point p,Point min): p{p.getX(),p.getY()}, min{min.getX(),min.getY()}{}

double Function7::Quota(Point p){
    double quota = 1 - exp(-(pow(p.getX(), 2) + pow(p.getY(),2)));
    return quota;
}

class Function8{

    public:
        
        Function8();
        Function8(Point p, Point min);

        Point  getP() const;
        Point  getMin() const;

        double Quota(Point p);

    private:

        Point p;    //punto p
        Point min;  //punto di minimo

};

Point Function8::getP()const{
    return p;
}
Point Function8::getMin()const{
    return min;
}

Function8::Function8(): p{0,0}, min{0,0}{}
Function8::Function8(Point p,Point min): p{p.getX(),p.getY()}, min{min.getX(),min.getY()}{}

double Function8::Quota(Point p){
    double quota = 2 - cos(p.getX()*3.14) - cos(p.getY()*3.14);
    return quota;
}

#endif