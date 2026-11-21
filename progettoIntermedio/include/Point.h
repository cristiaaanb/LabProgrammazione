#ifndef Point
#define Point
#include <iostream>
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

#endif
