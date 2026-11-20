class Function1{

    public:
        
        Function();
        Function(point p);

        point  getP() const;
        point  getMin() const;

        double Quota(point p);

    private:

        point p;    //punto p
        point min;  //punto di minimo

};

point Function1::getP()const{
    return p;
}
point Function1::getMin()const{
    return min;
}

Function1::Function()p{0,0}, min{0,0}{}
Function1::Function(point p,point min)p{p.getX(),p.getY()}, min{min.getX(),min.getY()}{}

double Function1::Quota(point p){
    double quota = (pow(p.getX, 2) + pow(p.getY,2))/2;
    return quota;
}

class Function2{

    public:
        
        Function();
        Function(point p);

        point  getP() const;
        point  getMin() const;

        double Quota(point p);

    private:

        point p;    //punto p
        point min;  //punto di minimo

};

point Function2::getP()const{
    return p;
}
point Function2::getMin()const{
    return min;
}

Function2::Function()p{0,0}, min{0,0}{}
Function2::Function(point p,point min)p{p.getX(),p.getY()}, min{min.getX(),min.getY()}{}

double Function2::Quota(point p){
        double quota = (pow(p.getX, 2) + 16*pow(p.getY,2))/2;
        return quota;
}
class Function3{

    public:
        
        Function();
        Function(point p);

        point  getP() const;
        point  getMin() const;

        double Quota(point p);

    private:

        point p;    //punto p
        point min;  //punto di minimo

};

point Function3::getP()const{
    return p;
}
point Function3::getMin()const{
    return min;
}

Function3::Function()p{0,0}, min{0,0}{}
Function3::Function(point p,point min)p{p.getX(),p.getY()}, min{min.getX(),min.getY()}{}

double Function3::Quota(point p){
        double quota = pow(pow(p.getX, 2) - 1, 2) + pow(p.getY, 2);
        return quota;
}
class Function4{

    public:
        
        Function();
        Function(point p);

        point  getP() const;
        point  getMin() const;

        double Quota(point p);

    private:

        point p;    //punto p
        point min;  //punto di minimo

};

point Function4::getP()const{
    return p;
}
point Function4::getMin()const{
    return min;
}

Function4::Function()p{0,0}, min{0,0}{}
Function4::Function(point p,point min)p{p.getX(),p.getY()}, min{min.getX(),min.getY()}{}

double Function4::Quota(point p){
    double quota = pow(pow(p.getX, 2) - 1, 2) + pow((p.getX - 1), 2)/5 + pow(p.getY, 2);
    return quota;
}
class Function5{

    public:
        
        Function();
        Function(point p);

        point  getP() const;
        point  getMin() const;

        double Quota(point p);

    private:

        point p;    //punto p
        point min;  //punto di minimo

};

point Function5::getP()const{
    return p;
}
point Function5::getMin()const{
    return min;
}

Function5::Function()p{0,0}, min{0,0}{}
Function5::Function(point p,point min)p{p.getX(),p.getY()}, min{min.getX(),min.getY()}{}

double Function5::Quota(point p){
    double quota = 4*( pow(sinh(p.getX/2),2)) + pow(p.getY, 2);
    return quota;
}
class Function6{

    public:
        
        Function();
        Function(point p);

        point  getP() const;
        point  getMin() const;

        double Quota(point p);

    private:

        point p;    //punto p
        point min;  //punto di minimo

};

point Function6::getP()const{
    return p;
}
point Function6::getMin()const{
    return min;
}

Function6::Function()p{0,0}, min{0,0}{}
Function6::Function(point p,point min)p{p.getX(),p.getY()}, min{min.getX(),min.getY()}{}

double Function6::Quota(point p){
    double quota = log(1 + pow(p.getX, 2) + pow(p.getY,2));
    return quota;
}
class Function7{

    public:
        
        Function();
        Function(point p);

        point  getP() const;
        point  getMin() const;

        double Quota(point p);

    private:

        point p;    //punto p
        point min;  //punto di minimo

};

point Function7::getP()const{
    return p;
}
point Function7::getMin()const{
    return min;
}

Function7::Function()p{0,0}, min{0,0}{}
Function7::Function(point p,point min)p{p.getX(),p.getY()}, min{min.getX(),min.getY()}{}

double Function7::Quota(point p){
    double quota = 1 - exp(-(pow(p.getX, 2) + pow(p.getY,2)));
    return quota;
}
class Function8{

    public:
        
        Function();
        Function(point p);

        point  getP() const;
        point  getMin() const;

        double Quota(point p);

    private:

        point p;    //punto p
        point min;  //punto di minimo

};

point Function8::getP()const{
    return p;
}
point Function8::getMin()const{
    return min;
}

Function8::Function()p{0,0}, min{0,0}{}
Function8::Function(point p,point min)p{p.getX(),p.getY()}, min{min.getX(),min.getY()}{}

double Function8::Quota(point p){
    double quota = 2 - cos(p.getX*3.14) - cos(p.getY*3.14);
    return quota;
}

#endif