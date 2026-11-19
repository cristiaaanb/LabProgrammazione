#include <iostream>
#include <cmath>

using namespace std;

class Point{

    public:

        Point();
        Point(double x, double y);
        
        double getX() const;

        double getY() const;

        void setX(double x);

        void setY(double y);

        Point& operator=(const Point& p2);

        Point operator+(const Point p2);

        Point operator-(const Point p2);

        Point operator*(const Point p2);

        Point operator/(const Point p2);

    private:

        double x;
        double y;

};
Point::Point(): x{0}, y{0} {}
Point::Point(double xVal, double yVal): x{xVal},y{yVal} {}
double Point::getX()const{return x;}
double Point::getY()const{return y;}
void Point::setX(const double x){this->x = x;}
void Point::setY(const double y){this->y = y;}

//operatori
Point& Point::operator=(const Point& p2){
    this->x = p2.getX();
    this->y = p2.getY();
    return *this;
}

Point Point::operator+(const Point p2){
    Point p{};

    p.setX(this->x + p2.getX()) ;
    p.setY(this->y + p2.getY()) ;
    
    return p;
}

Point Point::operator-(const Point p2){
    Point p{};

    p.setX(this->x - p2.getX()) ;
    p.setY(this->y - p2.getY()) ;
    
    return p;
}

Point Point::operator*(const Point p2){
    Point p{};

    p.setX(this->x * p2.getX()) ;
    p.setY(this->y * p2.getY()) ;
    
    return p;
}

Point operator*(const Point& p2, double a){

    Point p{p2.getX()*a, p2.getY()*a};
    return p;

}

Point Point::operator/(const Point p2){
    Point p{};

    p.setX(this->x / p2.getX()) ;
    p.setY(this->y / p2.getY()) ;
    
    return p;
}

double function(Point p){

    return (pow(p.getX(), 2) + pow(p.getY(), 2))/2;

}

Point grad(Point p){
    Point p0{p.getX(), p.getY()};
    return p0;
}

Point gradientDescent(double a, Point p){

    Point p0 = p - grad(p)*a;
    return p0;

}

double normaGrad(Point p){

    Point p1{};
    Point p2{};

    p1.setX(p.getX());
    p1.setY(0);
    p2.setX(0);
    p2.setY(p.getY());

    double norma = sqrt(pow(grad(p1).getX(),2) + pow(grad(p2).getY(),2));

    return norma;
}

int main(){

    int N = 100;                    //max iterazioni
    int k = 0;                      //contatore iterazione
    double a = 0.2;                    //passo per il gradient descent
    bool trovato = false;        //valore booleano sul minimo

    double x0=3;
    double y0=1;

    double Xmin=0;
    double Ymin=0;

    Point p0{x0,y0};
    Point min{Xmin, Ymin};

    double T = normaGrad(p0);

    while(k<N && !trovato){
        
        p0 = gradientDescent(a, p0);
        std::cout<<function(p0)<<endl;
        if(k%10==0){

            std::cout<<"iterazione numero: "<<k<<
            " - punto p al passo k-esimo: ("<< p0.getX()<<","<<p0.getY()<<
            ") - funzione nel punto p al passo k-esimo: "<<function(p0)<<
            " - distanza (errore) dal minimo: "<< (function(p0)-function(min))<<
            " - norma : " << normaGrad(p0) << endl;
        }
        
        k++;

        if(p0.getX()==min.getX() && p0.getY()==min.getY()){
            trovato = true;
            std::cout<<"minimo trovato all'iterazione numero: "<<k<<endl;
        }

        
    }
    return 0;
}
