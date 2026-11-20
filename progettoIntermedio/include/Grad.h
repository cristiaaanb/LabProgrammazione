#ifndef Grad
#define Grad
#include "Point.h"
#include <cmath>

class Grad1{

    public:

        Grad1();
        Grad1(Point p);

        Point Gradient(Point p);

    private:

        Point p;
        
};

Grad1::Grad1(): p{0,0}{}
Grad1::Grad1(Point p1): p{p1.getX(),p1.getY()}{}

Point Grad1::Gradient(Point p){

    Point p1{p.getX(),p.getY()};
    return p1;

}

class Grad2{

    public:

        Grad2();
        Grad2(Point p);

        Point Gradient(Point p);

    private:

        Point p;
        
};

Grad2::Grad2(): p{0,0}{}
Grad2::Grad2(Point p1): p{p1.getX(),p1.getY()}{}

Point Grad2::Gradient(Point p){

    Point p1{p.getX(),16*p.getY()};
    return p1;

}

class Grad3{

    public:

        Grad3();
        Grad3(Point p);

        Point Gradient(Point p);

    private:

        Point p;
        
};

Grad3::Grad3(): p{0,0}{}
Grad3::Grad3(Point p1): p{p1.getX(),p1.getY()}{}

Point Grad3::Gradient(Point p){

    Point p1{p.getX()*(4*pow(p.getX(),2) - 4),2*p.getY()};
    return p1;

}

class Grad4{

    public:

        Grad4();
        Grad4(Point p);

        Point Gradient(Point p);

    private:

        Point p;
        
};

Grad4::Grad4(): p{0,0}{}
Grad4::Grad4(Point p1): p{p1.getX(),p1.getY()}{}

Point Grad4::Gradient(Point p){

    Point p1{p.getX()*(4*pow(p.getX(),2) - 4) + (2*(p.getX() - 1)/5),2*p.getY()};
    return p1;

}

class Grad5{

    public:

        Grad5();
        Grad5(Point p);

        Point Gradient(Point p);

    private:

        Point p;
        
};

Grad5::Grad5(): p{0,0}{}
Grad5::Grad5(Point p1): p{p1.getX(),p1.getY()}{}

Point Grad5::Gradient(Point p){

    Point p1{2*sinh(p.getX()),2*p.getY()};
    return p1;

}

class Grad6{

    public:

        Grad6();
        Grad6(Point p);

        Point Gradient(Point p);

    private:

        Point p;
        
};

Grad6::Grad6(): p{0,0}{}
Grad6::Grad6(Point p1): p{p1.getX(),p1.getY()}{}

Point Grad6::Gradient(Point p){

    Point p1{(2*p.getX())/(1 + pow(p.getX(), 2) + pow(p.getY(),2)),(2*p.getY())/(1 + pow(p.getX(), 2) + pow(p.getY(),2))};
    return p1;

}

class Grad7{

    public:

        Grad7();
        Grad7(Point p);

        Point Gradient(Point p);

    private:

        Point p;
        
};

Grad7::Grad7(): p{0,0}{}
Grad7::Grad7(Point p1): p{p1.getX(),p1.getY()}{}

Point Grad7::Gradient(Point p){

    Point p1{2*(exp(-(pow(p.getX(), 2) + pow(p.getY(),2))))*p.getX(),2*(exp(-(pow(p.getX(), 2) + pow(p.getY(),2))))*p.getY()};
    return p1;

}

class Grad8{

    public:

        Grad8();
        Grad8(Point p);

        Point Gradient(Point p);

    private:

        Point p;
        
};

Grad8::Grad8(): p{0,0}{}
Grad8::Grad8(Point p1): p{p1.getX(),p1.getY()}{}

Point Grad8::Gradient(Point p){

    Point p1{3.14*(sin(3.14*p.getX())), 3.14*(sin(3.14*p.getY()))};
    return p1;

}

#endif