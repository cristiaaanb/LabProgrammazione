#ifndef Point
#define Point

class Point{

    public:

        Point();
        explicit Point(double x, double getY);
        ~Point();

        double getX();

        double getY();

        void setX();

        void setY();

    private:

        double x;
        double y;

}
