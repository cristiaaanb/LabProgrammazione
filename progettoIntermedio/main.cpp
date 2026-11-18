#include <iostream>
using namespace std;

class Point{

    public:

        Point();
        Point(double x, double y);
        
        double const getX();

        double const getY();

        void setX(double x);

        void setY(double y);

        Point& operator=(const Point& p2);


    private:

        double x;
        double y;

}
Point::Point(){ new Point(0,0);}
Point::Point(double x, double y){   new Point(x,y);     }
Point::getX(){return x;}
Point::getY(){return y;}
Point::setX(const double x){x=this.x}
Point::setY(const double y){y=this.y}

//operatori
Point& Point::operator=(const Point& p2){
    return p2;
}

Point Point::operator+(const Point p2){
    Point p;
    x=this.x + p2.getX();
    y=this.y + p2.getY();
    p = new Point(x,y);
    return p;
}

Point::operator-(const Point p2){
    Point p;
    x=this.x - p2.getX();
    y=this.y - p2.getY();
    p = new Point(x,y);
    return p;
}

Point::operator*(const Point p2){
    Point p;
    x=this.x * p2.getX();
    y=this.y * p2.getY();
    p = new Point(x,y);
    return p;
}

Point::operator/(const Point p2){
    Point p;
    x=this.x / p2.getX();
    y=this.y / p2.getY();
    p = new Point(x,y);
    return p;
}

double function(Point p){

    return (pow(p.getX(), 2) + pow(p.getY(), 2))/2;

}

double grad(Point p){

    return (p.getX()+p.getY());

}

point gradientDescent(double a, Point p){

    point p0 = p - a*grad(p);
    return p0;

}

double normaGrad(Point p){

    Point p1;
    Point p2;

    p1.setX(p.getX());
    p1.setY(0);
    p2.setX(0);
    p2.setY(p.getY());

    double norma = sqrt(pow(grad(p1),2) + pow(grad(p2),2));

    return norma;
}

int main(){

    int N = 100;                    //max iterazioni
    int k = 0;                      //contatore iterazione
    double a = 0.2;                    //passo per il gradient descent
    boolean trovato = false;        //valore booleano sul minimo

    double x0=1;
    double y0=1;

    double Xmin=0;
    double Ymin=0;

    Point p0 = new Point(x0, y0);
    Point min = new Point(Xmin,Ymin);

    double T = normaGrad(p0);

    while((k<N && k<T) && !trovato){
        
        p0 = gradientDescent(a, p0);
        if(k==10){

            std::cout<<"iterazione numero: "+k+
            " - punto p al passo k-esimo: ("+ p0.getX()+","+p0.getY()+
            ") - funzione nel punto p al passo k-esimo: "+function(p0)+
            " - distanza (errore) dal minimo: "+ (function(p0)-function(min))+
            " - " + normaGrad(p0) << endl;
        }

        k++;
    }
    return 0;
}
